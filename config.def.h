/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

#define color_black     "#010101"
#define color_white     "#ddeeff"
#define color_dark_grey "#525252"
#define color_mid_grey  "#495052"

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
static const float menu_height_ratio = 2.5f;  /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*                fg               bg       */
	[SchemeNorm] = { color_dark_grey, color_black },
	[SchemeSel]  = { color_white    , color_mid_grey },
	[SchemeOut]  = { color_white    , color_black },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 10;
static unsigned int columns    = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
