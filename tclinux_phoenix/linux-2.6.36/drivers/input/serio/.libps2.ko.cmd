cmd_drivers/input/serio/libps2.ko := mips-buildroot-linux-gnu-ld -r  -m elf32btsmip -T /opt/tclinux_phoenix/linux-2.6.36/scripts/module-common.lds --build-id  -o drivers/input/serio/libps2.ko drivers/input/serio/libps2.o drivers/input/serio/libps2.mod.o