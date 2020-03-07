#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int g_sayi,sayi1,sayi2,basamak=0,mod,islem,toplam=0,y_sayi,i,a;
    printf("Bir tam sayi giriniz.\n");
    scanf("%d",&g_sayi);
    sayi1=g_sayi;
    sayi2=g_sayi;
    while(sayi1>0){
        sayi1=sayi1/10;
        basamak++;
            }
    for(i=basamak-1;i>=0;i--){
                mod=sayi2%10;

                islem =mod*pow(10,i);
                a= pow(10,i);

                toplam =toplam+islem;
                sayi2 =sayi2/10;
                printf("%d .Islem = %d * %d = %d \n",i,mod,a,islem);
                }
                 printf("%d \n",toplam);
    y_sayi=toplam;
    if(g_sayi==y_sayi){
        printf("Sayi palondromdur");
    }else{printf("sayi normaldir.");
            }

    return 0;
}
