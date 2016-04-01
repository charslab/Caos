rm *.o
rm *.elf

nasm -f elf32 loader.s -o loader.o 
gcc -m32 -c kmain.c -o kernel.o 

ld -T link.ld -melf_i386 loader.o kernel.o -o kernel.elf
