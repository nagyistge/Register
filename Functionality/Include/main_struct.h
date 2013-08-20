#ifndef  DEF_MAIN_STRUCT
#define  DEF_MAIN_STRUCT

/* ----------------------------------------------------------------------------
@COPYRIGHT  :
              Copyright 1993,1994,1995 David MacDonald,
              McConnell Brain Imaging Centre,
              Montreal Neurological Institute, McGill University.
              Permission to use, copy, modify, and distribute this
              software and its documentation for any purpose and without
              fee is hereby granted, provided that the above copyright
              notice appear in all copies.  The author and McGill University
              make no representations about the suitability of this
              software for any purpose.  It is provided "as is" without
              express or implied warranty.
---------------------------------------------------------------------------- */

#include  <common_include.h>

#ifndef lint
static char main_struct_rcsid[] = "$Header: /private-cvsroot/visualization/Register/Functionality/Include/main_struct.h,v 1.24 2005-02-28 20:53:27 bert Exp $";
#endif

#define  TWO_BUFFERS    2
#define  VOXEL_TYPE     MI_ORIGINAL_TYPE
#define  N_MERGED       2

typedef enum { BACKGROUND_COLOUR,
               TAG_INSIDE_COLOUR,
               TAG_OUTSIDE_COLOUR,
               TAG_INSIDE_INACTIVE_COLOUR,
               TAG_OUTSIDE_INACTIVE_COLOUR,
               CURSOR_INSIDE_COLOUR,
               CURSOR_OUTSIDE_COLOUR,
               N_MAIN_COLOURS } Main_colours;

typedef  struct
{
    VIO_Real            x_translation, y_translation;
    VIO_Real            x_scale, y_scale;
    int             prev_viewport_x_size;
    int             prev_viewport_y_size;
    int             used_viewport_x_size;
    int             used_viewport_y_size;
    VIO_Filter_types    filter_type;
    VIO_Real            filter_width;
    VIO_BOOL         pixels_are_up_to_date;
    int             n_pixels_alloced;
    pixels_struct   *pixels;
    object_struct   *cursor_lines;
} slice_struct;

typedef struct
{
    VIO_BOOL                    input_flag;
    VIO_Volume                     volume;
    VIO_STR                     filename;
    slice_struct               slices[N_VIEWS];
    VIO_Real                       position[VIO_N_DIMENSIONS];
    unsigned short             *cmode_colour_map;
    int                        cmode_colour_offset;
    VIO_Colour                     *rgb_colour_map;
    int                        rgb_colour_offset;
    int                        start_colour_map;
    int                        n_colour_entries;
    colour_coding_struct       colour_coding;

    volume_input_struct        volume_input;
    VIO_Volume                     volume_being_input;
    VIO_Real                       time_pos; /* Time position for 4D volumes */
}
trislice_struct;

typedef  struct
{
    VIO_BOOL                active_flag;
    slice_struct           slices[N_VIEWS];
    VIO_Real                   position[VIO_N_DIMENSIONS];
    int                    start_colour_map;
    int                    n_colour_entries1;
    int                    n_colour_entries2;
    Merge_methods          merge_method;
    VIO_Real                   opacity[N_MERGED];
    colour_coding_struct   colour_coding[N_MERGED];
}
merged_struct;

typedef  struct
{
    VIO_Real                   rms_error;
    VIO_BOOL                position_exists[N_VOLUMES];
    VIO_Point                  position[N_VOLUMES];
    VIO_STR                 name;
    VIO_BOOL                activity;
    object_struct          *objects[N_VOLUMES_DISPLAYED][N_VIEWS];
} tag_point_struct;

typedef  struct
{
    Trans_type             transform_type;
    int                    n_tag_points;
    tag_point_struct       *tag_points;
    VIO_BOOL                transform_out_of_date;
    VIO_General_transform      v2_to_v1_transform;
    VIO_Real                   avg_rms_error;
    VIO_BOOL                transform_exists;
    VIO_BOOL                saved_flag;
    VIO_BOOL                tags_visible;
} tag_list_struct;

typedef  struct
{
    window_struct            *window;
    graphics_struct          graphics;
    int                      degrees_continuity;
    trislice_struct          trislice[N_VOLUMES];
    merged_struct            merged;

    VIO_BOOL                  cursor_visibility;

    VIO_BOOL                  resampled_file_loaded;
    VIO_STR                   original_volume_filename;
    VIO_General_transform        resampling_transform;

    int                      start_colour_index;

    tag_list_struct          tags;

    void                     *render_storage;
} main_struct;

#endif
