/* user and group to drop privileges to */
static const char *user  = "samiul";
static const char *group = "samiul";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Background image path, should be available to the user above */
static const char* background_image = "/home/samiul/.local/share/wallpaper/wallhaven-3l3zdv.png";
