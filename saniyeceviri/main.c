#include <stdio.h>
#include <stdlib.h>
void cevir(int g_sure,int *saat,int *dakika,int *saniye){
     int kalan;
        *saat=g_sure/(3600);
        kalan=g_sure-(*saat*3600);
        *dakika=kalan/60;
        kalan=kalan-(*dakika*60);
        *saniye=kalan;

                                                        }
int main()
{
    int g_sure,saat,dakika,saniye;
    printf("Sureyi saniye cinsinden giriniz:\n");
    scanf("%d",&g_sure);
    cevir(g_sure,&saat,&dakika,&saniye);

    printf("%d saat %d dakika %d saniye",saat,dakika,saniye);
    return 0;
}
