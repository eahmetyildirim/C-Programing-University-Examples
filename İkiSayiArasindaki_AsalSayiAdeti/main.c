#include <stdio.h>
#include <stdlib.h>
void asal_sayi_adet(int birinci_sayi,int ikinci_sayi){
            int i,j,k,mod,sifir_say=0,asal_sayi_say=0;
            if(birinci_sayi>ikinci_sayi){
                    i=ikinci_sayi+1;
                    j=birinci_sayi;
                                    }else if(ikinci_sayi>birinci_sayi){
                    j=ikinci_sayi;
                    i=birinci_sayi+1;
                                    }else{
                                           printf("Asal sayi yoktur!!");
                                            }

                for(i;i<j;i++){

                        for(k=2;k<i;k++){
                                sifir_say=0;
                              mod=i%k;
                              if(mod==0){
                                sifir_say++;
                                break;
                                    }
                              }
                              if(sifir_say==0){
                                asal_sayi_say++;

                              }

                            }
                    printf("%d ile %d sayilari arasýndali asal sayi adeti : %d ",birinci_sayi,ikinci_sayi,asal_sayi_say);

                                                        }
int main()
{
    int a,b;
    printf("Birinci sayiyi giriniz!\n");
    scanf("%d",&a);
    printf("Ikinci  sayiyi giriniz!\n");
    scanf("%d",&b);

    asal_sayi_adet(a,b);
    return 0;
}
