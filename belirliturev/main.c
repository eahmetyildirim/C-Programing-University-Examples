#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float b_integral(int a,int b,int c){
        c=pow(c,a+1)/(a+1);
        b=pow(b,a+1)/(a+1);
        float sonuc =(float)c-b;
        return sonuc;
                                }
int main()
{
    printf("X'e bagli tek degiskenli integral alinmaktadir...\n");
    printf("Degiskenin ussunu giriniz..\n");
    int a,b,c;
    scanf("%d",&a);
    printf("Belirli integral alt degereni giriniz..\n");
    scanf("%d",&b);
    printf("Belirli integral ust degereni giriniz..\n");
    scanf("%d",&c);
    printf("Sonuc : %.1f",b_integral(a,b,c));
    return 0;
}
