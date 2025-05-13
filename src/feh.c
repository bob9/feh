void feh_clean_exit(void)
{
	/* Show mouse cursor for all windows before exit */
	for (int i = 0; i < window_num; i++) {
		winwidget_set_pointer(windows[i], 1);
	}

	/* Clean up */
	winwidget_destroy_all();
} 