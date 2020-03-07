#include <stdio.h>
#include <stdlib.h>
void yaz(int *dizi,int N){
            int i;
            for(i=0;i<N;i++){
                    printf("%d \n",dizi[i]);
                            }

                            }

int main()
{
int i,N=5;

int *dizi=(int*)malloc(N*sizeof(int));
dizi[0]=6;
dizi[1]=5;
dizi[2]=3;
dizi[3]=7;
dizi[4]=2;
yaz(dizi,N);
    N++;
    dizi=(int*)realloc(dizi,N*sizeof(int));
    dizi[N-1]=9;
    printf("Sona eklendiðinde: \n");
    yaz(dizi,N);
    // Sondan veri silme
    N--;
    dizi=(int*)realloc(dizi,N*sizeof(int));
    printf("Sondan silindiginde \n");
    yaz(dizi,N);
    //basa ekleme
    N++;
    for(i=N-1;i>0;i--){
           dizi[i]=dizi[i-1];
                        }
           dizi[0]=9;
    printf("basa ekleme\n");
    yaz(dizi,N);
    //bastan silme
    for(i=0;i<N-1;i++)
        dizi[i]=dizi[i+1];
    N--;
    dizi=(int*)realloc(dizi,N*sizeof(int));
    printf("bastan silindiginde \n");
    yaz(dizi,N);
    return 0;
}
