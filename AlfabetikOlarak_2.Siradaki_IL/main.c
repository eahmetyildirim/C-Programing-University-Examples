#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char metin[50];
    strcpy(metin,"Adana Mersin Osmaniye Artvin\0");
    char dizi[50][10],*prc;

    prc=strtok(metin," ");
     int i,j,say=0;
    while(prc!=NULL){
        printf("%s ",prc);
        strcpy(dizi[say],prc);
        say++;
        prc=strtok(NULL," ");

    }
        printf("\n");
        char tut[20];
        for(i=0;i<say-1;i++){
            for(j=i+1;j<say;j++){

                if(strcmp(dizi[i],dizi[j])==1){
                    printf("---------------------------\n");
                     printf("%s  vs %s  %d \n",dizi[i],dizi[j],strcmp(dizi[i],dizi[j]));
                    strcpy(tut,dizi[i]);
                    strcpy(dizi[i],dizi[j]);
                    strcpy(dizi[j],tut);
                     printf("%s  vs %s  %d \n",dizi[i],dizi[j],strcmp(dizi[i],dizi[j]));

                    printf("---------------------------\n");
                }

            }

        }


        for(i=0;i<say;i++){
            printf("%s \n",dizi[i]);
        }
        printf("Ikinci siradaki :%s",dizi[1]);

    return 0;
}
