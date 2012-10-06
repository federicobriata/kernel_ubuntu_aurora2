export ARCH=arm
export CROSS_COMPILE=/home/vlad/arm-2010q1/bin/arm-none-eabi-
#export CROSS_COMPILE=arm-none-linux-gnueabi-
#cp arch/arm/configs/meson6_linux .config
#make vmlinux
make menuconfig

TOP=${PWD}
export MKIMAGE=${TOP}/arch/arm/boot/mkimage
make uImage -j2
#make modules -j2
#make modules_install

