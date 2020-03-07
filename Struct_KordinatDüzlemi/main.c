#include <stdio.h>
#include <stdlib.h>
struct kordinat{
        int x;
        int y;
        int bolge;
            }inf[100];
int main()
{
    int i=0,j;
    while(1)
    {
        inf=malloc()
        printf("%d. nokta x degerini giriniz:",i+1);
        scanf("%d",&inf[i].x);
        if(inf[i].x==0)
            break;
        printf("%d. nokta y degerini giriniz:",i+1);
        scanf("%d",&inf[i].y);
        if(inf[i].y==0)
            break;

        if(inf[i].x>0 && inf[i].y>0)
                inf[i].bolge=1;
         if(inf[i].x>0 && inf[i].y<0)
                inf[i].bolge=4;
         if(inf[i].x<0 && inf[i].y<0)
                inf[i].bolge=3;
          if(inf[i].x<0 && inf[i].y>0)
                inf[i].bolge=2;
        printf("Sonucu ekrana basmak icin X veya Y degerlerinden birini '0' girin.\n");
        i++;
    }
        printf("Noktarlar (x,y,bolge)\n");
        for(j=0;j<i;j++){
                printf("%d,%d,%d",inf[j].x,inf[j].y,inf[j].bolge);
                printf("\n");
                            }


    return 0;
}
