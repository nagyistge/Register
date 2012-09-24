START_GLOBALS
//User_interface
    DEF_GLOBAL( Main_window_name, STRING, "Register" )

    DEF_GLOBAL( Initial_rgb_state, BOOLEAN, FALSE )
    DEF_GLOBAL( Initial_double_buffer_state, BOOLEAN, TRUE )
    DEF_GLOBAL( Initial_interpolation_state, BOOLEAN, FALSE )

    DEF_GLOBAL( Timer_interval, Real, 0.017 )

    DEF_GLOBAL( Min_colours_needed, int, 64 )
    DEF_GLOBAL( Colour_table_start, int, 256 )
    DEF_GLOBAL( Colour_table_8bit_start, int, 16 )
    DEF_GLOBAL_COLOUR( Default_UI_background_colour )
    DEF_GLOBAL_COLOUR( Default_divider_colour )
    DEF_GLOBAL_COLOUR( Default_button_active_colour )
    DEF_GLOBAL_COLOUR( Default_button_selected_colour )
    DEF_GLOBAL_COLOUR( Default_button_inactive_colour )
    DEF_GLOBAL_COLOUR( Default_button_text_colour )
    DEF_GLOBAL_COLOUR( Default_text_entry_active_colour )
    DEF_GLOBAL_COLOUR( Default_text_entry_selected_colour )
    DEF_GLOBAL_COLOUR( Default_text_entry_inactive_colour )
    DEF_GLOBAL_COLOUR( Default_text_entry_edit_colour )
    DEF_GLOBAL_COLOUR( Default_text_entry_edit_text_colour )
    DEF_GLOBAL_COLOUR( Default_text_entry_text_colour )
    DEF_GLOBAL_COLOUR( Default_text_entry_cursor_colour )
    DEF_GLOBAL_COLOUR( Default_label_active_colour )
    DEF_GLOBAL_COLOUR( Default_label_selected_colour )
    DEF_GLOBAL_COLOUR( Default_label_inactive_colour )
    DEF_GLOBAL_COLOUR( Default_label_text_colour )
    DEF_GLOBAL_COLOUR( Default_slider_active_colour )
    DEF_GLOBAL_COLOUR( Default_slider_inactive_colour )
    DEF_GLOBAL_COLOUR( Default_slider_peg_colour )

    DEF_GLOBAL_COLOUR( Default_volume1_under_colour )
    DEF_GLOBAL_COLOUR( Default_volume1_over_colour )
    DEF_GLOBAL_COLOUR( Default_volume2_under_colour )
    DEF_GLOBAL_COLOUR( Default_volume2_over_colour )

    DEF_GLOBAL( Initial_window_x_size, int, 1000 )
    DEF_GLOBAL( Initial_window_y_size, int, 900 )
    DEF_GLOBAL( Default_main_menu_width, int, 100 )
    DEF_GLOBAL( Default_tag_panel_height, int, 110 )
    DEF_GLOBAL( Default_volume_panel_height, int, 150 )

    DEF_GLOBAL( Slice_top_view_height, Real, 0.4 )
    DEF_GLOBAL( Slice_middle_view_height, Real, 0.3 )
    DEF_GLOBAL( Slice_left_view_width, Real, 0.3333 )
    DEF_GLOBAL( Slice_middle_view_width, Real, 0.3333 )

    DEF_GLOBAL( Default_divider_width, int, 4 )

    DEF_GLOBAL( Main_menu_x_offset, int, 10 )
    DEF_GLOBAL( Main_menu_y_offset, int, 20 )

    DEF_GLOBAL( Interface_x_spacing, int, 10 )
    DEF_GLOBAL( Interface_y_spacing, int, 10 )
    DEF_GLOBAL( Interface_highlight_time, Real, 0.2 )

    DEF_GLOBAL( Volume_y_spacing, int, 7 )

    DEF_GLOBAL( Pixels_per_double_size, Real, 100.0 )

    DEF_GLOBAL( Button_height, int, 15 )
    DEF_GLOBAL( Button_width, int, 80 )
    DEF_GLOBAL( Button_text_font, int, (int) SIZED_FONT )
    DEF_GLOBAL( Button_text_font_size, Real, 10.0 )

    DEF_GLOBAL( Text_entry_height, int, 15 )
    DEF_GLOBAL( Text_entry_font, int, (int) SIZED_FONT )
    DEF_GLOBAL( Text_entry_font_size, Real, 10.0 )
    DEF_GLOBAL( Text_entry_cursor_size, Real, 10.0 )

    DEF_GLOBAL( Tags_filename_x_offset, int, 5 )
    DEF_GLOBAL( Tags_filename_width, int, 90 )

    DEF_GLOBAL( Volume_menu_x_offset, int, 10 )
    DEF_GLOBAL( Volume_menu_y_offset, int, 10 )
    DEF_GLOBAL( Volume_button_height, int, 15 )
    DEF_GLOBAL( Volume_button_width, int, 70 )
    DEF_GLOBAL( Filter_button_height, int, 15 )
    DEF_GLOBAL( Filter_button_width, int, 60 )
    DEF_GLOBAL( Load_filename_width, int, 150 )
    DEF_GLOBAL( Colour_bar_button_width, int, 40 )
    DEF_GLOBAL( Colour_bar_button_spacing, int, 5 )
    DEF_GLOBAL( Position_label_width, int, 15 )
    DEF_GLOBAL( Position_values_width, int, 35 )
    DEF_GLOBAL( Position_values_separation, int, 5 )
    DEF_GLOBAL( Position_values_format, STRING, "%.1lf" )

    DEF_GLOBAL( Filter_selection_x_size, int, 360 )
    DEF_GLOBAL( Filter_selection_y_size, int, 340 )
    DEF_GLOBAL( Filter_button_spacing, int, 5 )
    DEF_GLOBAL( Filter_y_spacing, int, 7 )
    DEF_GLOBAL( Full_width_label_width, int, 70 )
    DEF_GLOBAL( Full_width_text_width, int, 40 )
    DEF_GLOBAL( Filter_view_label_width, int, 100 )
    DEF_GLOBAL( Filter_name1, STRING, "Transverse Filter" )
    DEF_GLOBAL( Filter_name2, STRING, "Sagittal Filter" )
    DEF_GLOBAL( Filter_name3, STRING, "Coronal Filter" )

    DEF_GLOBAL( Label_text_font, int, (int) SIZED_FONT )
    DEF_GLOBAL( Label_text_font_size, Real, 10.0 )

    DEF_GLOBAL( Load_popup_x_size, int, 250 )
    DEF_GLOBAL( Load_popup_y_size, int, 80 )
    DEF_GLOBAL( Load_meter_x_size, int, 200 )
    DEF_GLOBAL( Load_meter_y_size, int, 15 )
    DEF_GLOBAL_COLOUR( Load_meter_background_colour )
    DEF_GLOBAL_COLOUR( Load_meter_colour )

    DEF_GLOBAL( Resample_popup_x_size, int, 250 )
    DEF_GLOBAL( Resample_popup_y_size, int, 80 )
    DEF_GLOBAL( Resample_meter_x_size, int, 200 )
    DEF_GLOBAL( Resample_meter_y_size, int, 15 )
    DEF_GLOBAL_COLOUR( Resample_meter_background_colour )
    DEF_GLOBAL_COLOUR( Resample_meter_colour )

    DEF_GLOBAL_COLOUR( Popup_background_colour )

    DEF_GLOBAL( Move_slice_speed, Real, 0.25 )

    DEF_GLOBAL( Volume_1_default_colour_coding, int, (int) SPECTRAL )
    DEF_GLOBAL( Volume_2_default_colour_coding, int, (int) GRAY_SCALE )

    DEF_GLOBAL( Slider_text_entry_x_offset, int, 3 )
    DEF_GLOBAL( Slider_text_entry_y_offset, int, 15 )
    DEF_GLOBAL( Slider_height, int, 15 )
    DEF_GLOBAL( Slider_text_width, int, 55 )
    DEF_GLOBAL( Slider_text_height, int, 15 )
    DEF_GLOBAL( Slider_text_font, int, (int) SIZED_FONT )
    DEF_GLOBAL( Slider_text_font_size, Real, 10.0 )
    DEF_GLOBAL( Slider_text_peg_width, int, 10 )

    DEF_GLOBAL( Colour_bar_slider_width, int, 150 )
    DEF_GLOBAL( Colour_bar_slider_height, int, 10 )
    DEF_GLOBAL( Colour_bar_text_format, STRING, "%.3g" )

    DEF_GLOBAL( Opacity_slider_width, int, 150 )
    DEF_GLOBAL( Opacity_slider_height, int, 10 )
    DEF_GLOBAL( Opacity_text_format, STRING, "%.2lf" )

    DEF_GLOBAL( Avg_rms_label_width, int, 35 )
    DEF_GLOBAL( Avg_rms_number_width, int, 45 )
    DEF_GLOBAL( Rms_button_width, int, 35 )
    DEF_GLOBAL( Rms_number_width, int, 45 )
    DEF_GLOBAL( Tag_world_button_width, int, 50 )
    DEF_GLOBAL( Rms_error_format, STRING, "%5.1f" )
    DEF_GLOBAL( Tag_number_format, STRING, "%2d:" )
    DEF_GLOBAL( Default_n_tag_points, int, 5 )
    DEF_GLOBAL( Tag_number_button_width, int, 30 )
    DEF_GLOBAL( Tag_position_label_width, int, 40 )
    DEF_GLOBAL( Tag_position_width, int, 40 )
    DEF_GLOBAL( Tag_point_height, int, 15 )
    DEF_GLOBAL( Tag_name_width, int, 150 )
    DEF_GLOBAL( Tag_activity_width, int, 30 )
    DEF_GLOBAL( Advance_tags_button_width, int, 30 )
    DEF_GLOBAL( Tags_x_spacing, int, 5 )
    DEF_GLOBAL( Tags_y_spacing, int, 5 )

    DEF_GLOBAL_COLOUR( Message_text_colour )
    DEF_GLOBAL( Message_font, int, (int) SIZED_FONT )
    DEF_GLOBAL( Message_font_size, Real, 14.0 )
    DEF_GLOBAL( Message_x_offset, Real, 20.0 )
    DEF_GLOBAL( Message_y_offset, Real, 20.0 )
    DEF_GLOBAL( Message_text_y_offset, Real, 20.0 )
    DEF_GLOBAL( Message_ok_button_height, Real, 20.0 )
    DEF_GLOBAL( Message_ok_button_width, Real, 60.0 )
    DEF_GLOBAL( Message_expiration_time, Real, 15.0 * 60.0 )

    DEF_GLOBAL( Colour_selection_x_size, int, 300 )
    DEF_GLOBAL( Colour_selection_y_size, int, 120 )
    DEF_GLOBAL( Colour_selection_n_across, int, 3 )

    DEF_GLOBAL( Initial_volumes_synced, BOOLEAN, FALSE )

    DEF_GLOBAL( Transform_selection_x_size, int, 350 )
    DEF_GLOBAL( Transform_selection_y_size, int, 200 )
    DEF_GLOBAL( Transform_button_width, int, 320 )

    DEF_GLOBAL( Quit_x_size, int, 350 )
    DEF_GLOBAL( Quit_y_size, int, 100 )

    DEF_GLOBAL( Delete_tags_x_size, int, 350 )
    DEF_GLOBAL( Delete_tags_y_size, int, 60 )

    DEF_GLOBAL( Value_readout_width, int, 50 )
    DEF_GLOBAL( Readout_values_format, STRING, "%g" )

    DEF_GLOBAL( Seconds_per_resample, Real, 0.1 )

    DEF_GLOBAL( Activity_9_10, BOOLEAN, TRUE )

//Functionality
    DEF_GLOBAL( Disable_alloc_checking, BOOLEAN, TRUE )
    DEF_GLOBAL( Alloc_debugging, BOOLEAN, FALSE )

    DEF_GLOBAL( Default_transform_type, int, (int) TRANS_LSQ6 )

    DEF_GLOBAL( Use_overlay_planes, BOOLEAN, FALSE )
    DEF_GLOBAL_COLOUR( Overlay_colour_1 )
    DEF_GLOBAL_COLOUR( Overlay_colour_2 )
    DEF_GLOBAL_COLOUR( Overlay_colour_3 )

    DEF_GLOBAL( Slice_1_x_axis_index, int, X )
    DEF_GLOBAL( Slice_1_y_axis_index, int, Y )
    DEF_GLOBAL( Slice_2_x_axis_index, int, Y )
    DEF_GLOBAL( Slice_2_y_axis_index, int, Z )
    DEF_GLOBAL( Slice_3_x_axis_index, int, X )
    DEF_GLOBAL( Slice_3_y_axis_index, int, Z )

    DEF_GLOBAL( Slice_1_x_axis_flip, BOOLEAN, FALSE )
    DEF_GLOBAL( Slice_1_y_axis_flip, BOOLEAN, FALSE )
    DEF_GLOBAL( Slice_2_x_axis_flip, BOOLEAN, FALSE )
    DEF_GLOBAL( Slice_2_y_axis_flip, BOOLEAN, FALSE )
    DEF_GLOBAL( Slice_3_x_axis_flip, BOOLEAN, FALSE )
    DEF_GLOBAL( Slice_3_y_axis_flip, BOOLEAN, FALSE )
    DEF_GLOBAL( Slice_fit_size, Real, 0.9 )
    DEF_GLOBAL_COLOUR( Slice_background_colour )

    DEF_GLOBAL( Slice_cursor_offset, int, 4 )
    DEF_GLOBAL( Slice_cursor_size, int, 10 )

    DEF_GLOBAL_COLOUR( Cursor_inside_colour )
    DEF_GLOBAL_COLOUR( Cursor_outside_colour )

    DEF_GLOBAL_COLOUR( Tag_inside_colour )
    DEF_GLOBAL_COLOUR( Tag_outside_colour )
    DEF_GLOBAL_COLOUR( Tag_inside_inactive_colour )
    DEF_GLOBAL_COLOUR( Tag_outside_inactive_colour )
    DEF_GLOBAL( Tag_circle_resolution, int, 8 )
    DEF_GLOBAL( Tag_radius_pixels, int, 5 )

    DEF_GLOBAL( Merged_colour_table_fraction, Real, 0.75 )

    DEF_GLOBAL_COLOUR( Initial_under_colour )
    DEF_GLOBAL_COLOUR( Initial_over_colour )

    DEF_GLOBAL( Initial_tags_visible, BOOLEAN, TRUE )

    DEF_GLOBAL( Initial_merge_method, int, 2 )
    DEF_GLOBAL( Initial_merged_1_weight, Real, 0.5 )
    DEF_GLOBAL( Initial_merged_2_weight, Real, 0.5 )
    DEF_GLOBAL( Use_over_under_colour_in_weights, BOOLEAN, TRUE )

    DEF_GLOBAL( Resample_command_name, STRING, "register_resample" )

    DEF_GLOBAL( Initial_slice_filter_type, int, 0 )
    DEF_GLOBAL( Initial_slice_filter_width, Real, 1.0 )

    DEF_GLOBAL( Convert_vectors_to_rgb, BOOLEAN, TRUE )
END_GLOBALS