#include <stdio.h>
#include <stdlib.h>
float toplama(int a,int b){
        float sonuc =(float)a+b;
        return sonuc;
            }
float cikartma(int a,int b){
        float sonuc =(float)a-b;
        return sonuc;
            }
float carpma(int a,int b){
        float sonuc =(float)a*b;
        return sonuc;
            }
float bolme(int a,int b){
        float sonuc =(float)a/b;
        return sonuc;
            }
int main()
{
    int a,b,islem;
    float sonuc;
    printf("Birinci tam sayi giriniz\n");
    scanf("%d",&a);
    printf("Ikinci tam sayi giriniz\n");
    scanf("%d",&b);
    printf("Islemler:\n");
    printf("   Toplama islemi icin    1'basiniz\n");
    printf("   Cikartma islemi icin   2'basiniz\n");
    printf("   Carpma islemi icin     3'basiniz\n");
    printf("   Bolme islemi icin      4'basiniz\n");
    printf("islem seciniz:");
    scanf("%d",&islem);
    if(islem==1){
        sonuc=toplama(a,b);
        printf("Sonuc=%f",sonuc);
    }else if(islem==2){
        sonuc=cikartma(a,b);
        printf("Sonuc=%f",sonuc);
    }else if(islem==3){
        sonuc=carpma(a,b);
        printf("Sonuc=%f",sonuc);
    }else if(islem==4){
        sonuc=bolme(a,b);
        printf("Sonuc=%f",sonuc);
    }


    return 0;
}
