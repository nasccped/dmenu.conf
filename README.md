dmenu config
============

Welcome to my personal config for dmenu program 🚀

> [!WARNING]
>
> This project wasn't originally made by me! You can find the
> original readme at `README.old.txt` and the `LICENSE` as well.
> This page bellow was written by me to show can you get this
> program with my personal changes, the requirements and install
> guide!

## What's dmenu?

[dmenu](https://wiki.archlinux.org/title/Dmenu) is an app launcher
(such as [rofi](https://github.com/davatorium/rofi)) targeted to X
server. It a lot simple, consequently lightweight and easy to use.

## How to get it?

Let's talk about the requirements!

### Requirements

Since `dmenu` is targeted to X server, you'll need the X dependencies
and libraries as well _(th'all are listed in my
[dwm.conf](https://github.com/nasccped/dwm.conf) repository)._

I've also set [`bitocra`](https://github.com/ninjaaron/bitocra) as
dmenu font. If you don't have it, it's ok (the dmenu will fallback
to other fonts - _default case: `monospace`_).

> [!NOTE]
>
> This is a **github repository**, dmenu was built in **C lang**,
> so you'll obviously need:
> - `git`
> - `gcc`
> - `GNU make`
> - maybe `pkg-config` _(I'm not sure)_

### Getting the program

Follow these steps to:

1. Make sure you have all the requirements mentioned above!
2. Clone the repo + cd + remove git dir:
```sh
git clone https://github.com/nasccped/dmenu.conf && \
cd dmenu.conf && \
rm -rf .git
```
3. Install using the Makefile (sudo required):
```sh
make clean && sudo make install
```

## Changes/Patches

Here are some changes and patches that I've  done/merged:

- `center` patch
> [!TIP]
>
> Width centering works fine, but I've personalized the
> `menu_height_ratio-config.def.h` to fit my preferences. You can so:
>
> > The `menu_height_ratio` will split your screen into the mentioned
> > marker, i.e:
> > ```c
> > /*
> >  * It'll split your screen into 2 halfs and then, display dmenu
> >  * Centered at the first index by the split, so:
> >  * >>> 40 x 9 (2.f means 9 / 2 => 4.5)
> >  * +--------------------------------------+
> >  * |                                      |
> >  * |                                      |
> >  * |                                      |
> >  * | --------- here's your half --------- |
> >  * |                                      |
> >  * |                                      |
> >  * |                                      |
> >  * +--------------------------------------+
> >  *
> >  * Consider changing this value to your preferences (mine: 2.5f)
> >  */
> > static const float menu_height_ratio = 2.0f;
> > ```
- `border` patch: I've been using 2 px for a while. You can change
  this value at `border_width-config.def.h`
- `grid` patch: change dmenu from single column to multi-cell (row +
  column). You can change the row/col amount in `config.def.h`.
- `coloring`: I've set my own color hex (using `#define` at the top
  of `config.def.h`)
- `font`: I'm currently using the
  [`bitocra`](https://github.com/ninjaaron/bitocra). consider
  changing `static const char *fonts[]` at `config.def.h`
