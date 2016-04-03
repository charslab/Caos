ssh carloalberto@192.168.1.5 cd Documents/Caos rm *.c *rm.s rm *.elf
scp *.c carloalberto@192.168.1.5:Documents/Caos/
scp *.s carloalberto@192.168.1.5:Documents/Caos/
scp *.ld carloalberto@192.168.1.5:Documents/Caos/
scp *.sh carloalberto@192.168.1.5:Documents/Caos/
ssh carloalberto@192.168.1.5 "cd Documents/Caos && ./compile.sh"
scp carloalberto@192.168.1.5:Documents/Caos/kernel.elf ./kernel.elf