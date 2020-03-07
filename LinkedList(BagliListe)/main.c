#include <stdio.h>
#include <stdlib.h>

typedef struct sayilar{
        int sayi;
        struct sayilar *sonraki;
                }node;
void yaz(struct sayilar *n){
        printf("Liste \n");
        while(n!=NULL){
            printf("%d \n",n->sayi);
            n=n->sonraki;
            }
        }
void sona_ekle(node *x,int yeni_veri){
    while(x->sonraki!=NULL){
        x=x->sonraki;
        }
    x->sonraki=(node *)malloc(sizeof(node));
    x->sonraki->sayi=yeni_veri;
    x->sonraki->sonraki=NULL;

}
void basa_ekle(node **x,int yeni_veri){
            struct sayilar *yeni_sayi=(node *)malloc(sizeof(node));
            yeni_sayi->sayi=yeni_veri;
            yeni_sayi->sonraki=*x;
            *x=yeni_sayi;

}
void araya_ekle(node *onceki_dugum,int yeni_veri){
    if(onceki_dugum==NULL){
        printf("Onceki dugum null olmamali..");
        return;
    }
    struct sayilar *yeni_dugum=(struct sayilar *)malloc(sizeof(struct sayilar));
    yeni_dugum->sayi=yeni_veri;
    yeni_dugum->sonraki=onceki_dugum->sonraki;
    onceki_dugum->sonraki=yeni_dugum;
    }
//void sirali_ekle()
int main(){
struct sayilar *bir=(struct sayilar *)malloc(sizeof(struct sayilar));
bir->sayi=2;
bir->sonraki=NULL;
yaz(bir);
sona_ekle(bir,20);
yaz(bir);
basa_ekle(&bir,1);
yaz(bir);
araya_ekle(bir,9);
yaz(bir);
return 0;
}
