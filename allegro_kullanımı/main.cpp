#include "allegro.h"
#include <stdio.h>
void yol1ciz(){
      int  renk = makecol(250, 250,250);

    arc(screen, 250, 250,itofix(7), itofix(57), 100, makecol(250, 250, 250));
    arc(screen, 250, 250, itofix(71), itofix(121), 100, makecol(250, 250, 250));
	arc(screen, 250, 250,  itofix(135), itofix(185), 100, makecol(250, 250, 250));
	arc(screen, 250, 250, itofix(199), itofix(249), 100, makecol(250, 250, 250));
    arc(screen, 250, 250,itofix(0), itofix(255), 70, makecol(250, 250, 250));

    line(screen, 50, 234, 152,234, renk);
    line(screen, 50, 267, 152,267, renk);
    line(screen, 350, 234, 452,234, renk);
    line(screen, 350, 267, 452,267, renk);
    line(screen, 234, 50, 234,152, renk);
    line(screen, 267, 50, 267,152, renk);
    line(screen, 234, 350, 234,452, renk);
    line(screen, 267, 350, 267,452, renk);
    textprintf(screen, font, 230, 500, 10, "YOL 1",SCREEN_W, SCREEN_H);
 }

void yol2ciz(){
      int  renk = makecol(250, 250,250);

    arc(screen, 800, 250,itofix(7), itofix(57), 100, makecol(250, 250, 250));
    arc(screen, 800, 250, itofix(71), itofix(121), 100, makecol(250, 250, 250));
	arc(screen, 800, 250,  itofix(135), itofix(185), 100, makecol(250, 250, 250));
	arc(screen, 800, 250, itofix(199), itofix(249), 100, makecol(250, 250, 250));
    arc(screen, 800, 250,itofix(10), itofix(118), 70, makecol(250, 250, 250));
    arc(screen, 800, 250,itofix(139), itofix(244), 70, makecol(250, 250, 250));

    line(screen, 600, 234, 702,234, renk);
    line(screen, 600, 267, 702,267, renk);
    line(screen, 900, 234, 1002,234, renk);
    line(screen, 900, 267, 1002,267, renk);
    line(screen, 732, 235, 868,235, renk);
    line(screen, 732, 267, 868,267, renk);
    line(screen, 784, 50, 784,152, renk);
    line(screen, 817, 50, 817,152, renk);
    line(screen, 784, 350, 784,452, renk);
    line(screen, 817, 350, 817,452, renk);

    textprintf(screen, font, 780, 500, 10, "YOL 2",SCREEN_W, SCREEN_H);
    }

int main()
{

    // Allegroyu ilklendir
    allegro_init();
    install_keyboard();
    install_timer();
    srand(time(NULL));

    // ekran kipini 1080x720 olarak ayarla
    int donen = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1080, 720, 0, 0);


    // ekran çözünürlüðünü göster
    textprintf(screen, font, 100, 0, makecol(250, 250, 250),"Lutfen asagidaki sekillerden birini seciniz.. Cikmak icin ESC tusuna basiniz",
SCREEN_W, SCREEN_H);


 yol1ciz();
 yol2ciz();
    textout_ex(screen,font,"Merhaba Dunya", 10, 10, makecol(255,255,100), -1);
     readkey();
printf("Secimininizi yapýn");
int  secim;
scanf("%d",&secim);



}

END_OF_MAIN();
