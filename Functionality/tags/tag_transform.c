#include  <def_register.h>

private  void  recompute_tag_rms_errors(
    tag_list_struct   *tags )
{
    int    i, n_active;
    Real   sum, rms_error, x, y, z;
    Point  transformed;

    sum = 0.0;
    n_active = 0;

    for_less( i, 0, tags->n_tag_points )
    {
        general_transform_point( &tags->v2_to_v1_transform,
                                 Point_x(tags->tag_points[i].position[1]),
                                 Point_y(tags->tag_points[i].position[1]),
                                 Point_z(tags->tag_points[i].position[1]),
                                 &x, &y, &z );

        fill_Point( transformed, x, y, z );

        rms_error = distance_between_points( &transformed,
                                             &tags->tag_points[i].position[0] );

        tags->tag_points[i].rms_error = rms_error;

        if( tags->tag_points[i].activity )
        {
            ++n_active;
            sum += rms_error;
        }
    }

    tags->avg_rms_error = sum / (Real) n_active;
}

public  void  recompute_tag_transform(
    tag_list_struct   *tags )
{
    int        i, j, c, n_valid;
    float      **Apoints, **Bpoints;
    float      translation[N_DIMENSIONS+1], centre_of_rotation[N_DIMENSIONS+1];
    float      scale;
    float      **rotation, **transformation;
    Transform  linear_transform;

    ALLOC2D( Apoints, tags->n_tag_points+1, N_DIMENSIONS+1 );
    ALLOC2D( Bpoints, tags->n_tag_points+1, N_DIMENSIONS+1 );

    n_valid = 0;

    for_less( i, 0, tags->n_tag_points )
    {
        if( tags->tag_points[i].activity &&
            tags->tag_points[i].position_exists[0] &&
            tags->tag_points[i].position_exists[1] )
        {
            for_less( c, 0, N_DIMENSIONS )
            {
                Apoints[n_valid+1][c+1] =
                    Point_coord(tags->tag_points[i].position[0],c);
                Bpoints[n_valid+1][c+1] =
                    Point_coord(tags->tag_points[i].position[1],c);
            }
            ++n_valid;
        }
    }

    if( tags->transform_exists )
        delete_general_transform( &tags->v2_to_v1_transform );

    if( n_valid >= 4 )
    {
        ALLOC2D( rotation, N_DIMENSIONS+2, N_DIMENSIONS+2 );
        ALLOC2D( transformation, N_DIMENSIONS+2, N_DIMENSIONS+2 );
        procrustes( n_valid, N_DIMENSIONS, Apoints, Bpoints,
                    translation, centre_of_rotation, rotation, &scale );

        if( !Scaling_allowed )
            scale = 1.0;

        transformations_to_homogeneous( N_DIMENSIONS, translation, 
                                        centre_of_rotation, rotation, scale,
                                        transformation );

        for_less( i, 0, 4 )
        {
            for_less( j, 0, 4 )
            {
                Transform_elem(linear_transform,i,j) = transformation[j+1][i+1];
            }
        }

        FREE2D( rotation );
        FREE2D( transformation );

        create_linear_transform( &tags->v2_to_v1_transform, &linear_transform );
        tags->transform_exists = TRUE;
        recompute_tag_rms_errors( tags );
    }
    else
        tags->transform_exists = FALSE;

    FREE2D( Apoints );
    FREE2D( Bpoints );
}
