#define WHITE_ON_BLACK 0xF0
#define GREEN_ON_BLACK 0xA0;
#define BLACK_ON_WHITE 0x0F;
#define NULL 0 


char *buf = (char*)0x000b8000;
unsigned int curs = 0;
int mem_default_mode = WHITE_ON_BLACK; 

void mem_putch(char c, char bg) {
        buf[curs++] = c;
        buf[curs++] = bg;
}

void mem_init() {
	unsigned int r = 0; 
	unsigned int c = 0; 

	for(r = 0; r < 60; r++) 
	  for(c = 0; c < 80; c++) 
		mem_putch(' ', 0xFF);
       
	curs = 0;
}

unsigned int strlen(const char *str) {
	register const char *s; 
	for(s = str; *s; ++s)
		;

	return (unsigned int)((int)s - (int)str);
}	

void putch(char c) {
    mem_putch(c, mem_default_mode);
}

void kprintf(const char *str) {
    unsigned int i = 0; 
    unsigned int len = strlen(str);
    putch('0' + len);
    //for(i = 0; i < len; i++) {
    //	putch('0' + i);
    //}
}

void kmain() {	
	mem_init();
    
    putch('C');
    putch('a');
    putch('O');
    putch('S');
    putch('L');
    
	putch('0' + strlen("Hello"));
	//kprintf("Hello");

	for(;;);
}
