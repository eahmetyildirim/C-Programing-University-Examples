 #include <stdio.h>
#include <stdlib.h>
void max(int *dizi){
            int *enb,i;
            enb=&dizi[0];
            for(i=0;i<10;i++){
                    if(dizi[i]>*enb){
                        enb=&dizi[i];

                            }
                                }
          printf("En buyuk deger %d dir.\n En buyuk degerin adresi:%u",*enb,enb);


                }
void min(int *dizi){
            int *enk,i;
            enk=&dizi[0];
            for(i=0;i<10;i++){
                    if(dizi[i]<*enk){
                        enk=&dizi[i];

                            }
                                }
          printf("En kucuk deger %d dir.\n En kucuk degerin adresi:%u",*enk,enk);


                }
int main()
{
    int i,x[10];
    for(i=0;i<10;i++){
            printf("%d inci elemaný : ",i+1);
            scanf("%d",&x[i]);
                        }
        max(&x);
        printf("\n");
        min(&x);
    return 0;
}
