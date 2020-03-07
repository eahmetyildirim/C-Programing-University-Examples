#include <stdio.h>
#include <stdlib.h>
struct kutu
{
float uzunluk;
float yukseklik;
float genislik;
};
int main()
{
    struct kutu x[500];
    int i=0,t=1,j;
    while(t==1){
        printf("%d inci kutunun yuksekligini giriniz :",i+1);
        scanf("%f",&x[i].yukseklik);
        printf("%d inci kutunun genisligini giriniz :",i+1);
        scanf("%f",&x[i].genislik);
        printf("%d inci kutunun uzunlugunu giriniz :",i+1);
        scanf("%f",&x[i].uzunluk);
        i++;
        t=0;
        printf("Baska bir kutu bilgisi girmek istiyor musunuz?[Evet:1]");
        scanf("%d",&t);

                }
    float t_hacim=0,hacim;
    for(j=0;j<i;j++){
        hacim=x[j].genislik*x[j].yukseklik*x[j].uzunluk;
        t_hacim +=hacim;
        printf("%d inci kutunun [uzunlugu]:%.2f  [yuksekligi]:%.2f     [genisligi]:%.2f   [hacim]:%.2f \n ",j+1,x[j].uzunluk,x[j].yukseklik,x[j].genislik,hacim);
                        }
        printf("-----------------------------\n Toplam hacim:%.2f",t_hacim);

    return 0;
}
