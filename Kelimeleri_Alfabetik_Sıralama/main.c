#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*void sirala(char *dizi[]){
    char a[20];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            int sonuc=strcmp(dizi[i],dizi[j]);
            if(sonuc==1){
                strcpy(a,dizi[i]);
                strcpy(dizi[i],dizi[j]);
                strcpy(dizi[j],dizi[i]);

                        }
                                }


                    }



                        }*/
int main()
{
    int i;
    char dizi[4][20]={"Ahmet","Ali","Ayse","Aylin"};
    printf("String icersinde bulunan kelimeler :\n");
    for(i=0;i<4;i++){
        printf("%s \n",dizi[i]);
                    }
    printf("\n \n");
        char a[20];
    int j;
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            int sonuc=strcmp(dizi[i],dizi[j]);

            if(sonuc==1){
                strcpy(a,dizi[i]);
                strcpy(dizi[i],dizi[j]);
                strcpy(dizi[j],a);

                        }
                                }


                    }
      printf("Alfabetik siralanmis kelimeler :\n");
    for(i=0;i<4;i++)
        printf("%s \n",dizi[i]);


    return 0;
}
