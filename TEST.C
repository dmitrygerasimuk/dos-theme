#include <conio.h>
#include <stdio.h>

int colors() {
textcolor(BLUE);        cprintf("[ BLUE,%i      ]",BLUE);
textcolor(GREEN);       cprintf("[ GREEN,%i     ]",GREEN);
textcolor(CYAN);        cprintf("[ CYAN,%i      ]",CYAN);
textcolor(RED);         cprintf("[ RED,%i       ]",RED);
cprintf("\n\r");
textcolor(MAGENTA);     cprintf("[ MAGENTA,%i   ]",MAGENTA);
textcolor(BROWN);       cprintf("[ BROWN,%i     ]",BROWN);
textcolor(LIGHTGRAY);   cprintf("[ LIGHTGRAY,%i ]",LIGHTGRAY);
textcolor(DARKGRAY);    cprintf("[ DARKGRAY,%i  ]",DARKGRAY);
cprintf("\n\r");
textcolor(LIGHTBLUE);   cprintf("[ LIGHTBLUE,%i ]",LIGHTBLUE);
textcolor(LIGHTGREEN);  cprintf("[ LGHTGREN,%i ]",LIGHTGREEN);
textcolor(LIGHTCYAN);   cprintf("[ LGTCYAN,%i  ]",LIGHTCYAN);
textcolor(LIGHTRED);    cprintf("[ LGHTRED,%i  ]",LIGHTRED);
cprintf("\n\r");
textcolor(LIGHTMAGENTA);cprintf("[ LGHTMGNT,%i ]",LIGHTMAGENTA);
textcolor(YELLOW);      cprintf("[ YELLOW,%i   ]",YELLOW);
textcolor(WHITE);       cprintf("[ WHITE,%i    ]",WHITE);

}



int main()
{


textbackground(BLACK);
colors();
cprintf("\n\r");
textbackground(BLUE);
colors();
cprintf("\n\r");
textbackground(GREEN);
colors();
cprintf("\n\r");
textbackground(CYAN);
colors();

cprintf("\n\r");
textbackground(RED);
colors();




getch();

}

