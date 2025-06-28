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
