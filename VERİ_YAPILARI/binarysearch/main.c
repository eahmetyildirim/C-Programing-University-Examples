#include <stdio.h>
#include <stdlib.h>
void sirala(int dizi[10]){
        int i,j,tmp;
            for(i=0;i<10;i++){
                for(j=1;j<10-i;j++){
                    if(dizi[j-1]>dizi[j]){
                    tmp=dizi[j-1];
                    dizi[j-1]=dizi[j];
                    dizi[j]=tmp;

                    }
                }
            }

            }
void yaz(int dizi[10]){
        int i;
        printf("Dizi:\n");
        for(i=0;i<10;i++)
            printf("%d\n",dizi[i]);
        }
int ikili_arama(int dizi[10],int aranan){
            int enb,enk,ort;
            enb=9;
            enk=0;
            ort=(enb+enk)/2;
            int i=1;

        while(1){

            if(dizi[ort]==aranan){
                return ort;
            }else
            if(aranan>dizi[ort]){
            enk=ort+1;
            ort=(enk+enb)/2;
            continue;
            }else
            if(aranan<dizi[ort]){
             enb=ort-1;
             ort=(enb+enk)/2;
             continue;
            }
        }


                                }
int main()
{
    int dizi[10]={2,4,1,43,25,65,23,54,67,12};
    yaz(dizi);
    sirala(dizi);
    yaz(dizi);
    printf("Aranan :%d",ikili_arama(dizi,67));
   // ikili_arama(dizi,4);
    return 0;
}
