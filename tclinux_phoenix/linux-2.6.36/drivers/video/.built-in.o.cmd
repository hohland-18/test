cmd_drivers/video/built-in.o :=  mips-buildroot-linux-gnu-ld  -m elf32btsmip   -r -o drivers/video/built-in.o drivers/video/fb_notify.o drivers/video/backlight/built-in.o drivers/video/display/built-in.o drivers/video/omap2/built-in.o 