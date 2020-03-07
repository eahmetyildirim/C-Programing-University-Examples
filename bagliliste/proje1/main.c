#include <stdio.h>
#include <stdlib.h>
struct Dugum{
            int x;
        struct Dugum *sonraki;
            };

int main()
{

    struct Dugum *dizi;
    dizi=(struct Dugum*)malloc(sizeof(struct Dugum));
    int sayi;
    while(dizi==NULL){
            dizi->sonraki=(struct Dugum*)malloc(sizeof(struct Dugum));
            printf("disinda bir sayi giriniz:");
            scanf("%d",&dizi->x);
            dizi=dizi->sonraki;
            dizi=NULL;
                }
            dizi->sonraki->sonraki=NULL;
    while(dizi!=NULL){
            printf("%d",dizi->x);
            dizi=dizi->sonraki;
                        }
    printf("%d  %d",dizi->x,dizi->sonraki->x);
    return 0;
}
