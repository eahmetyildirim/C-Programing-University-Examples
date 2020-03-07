#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node{
    int x;
    int y;
    struct node *next;

    };
    struct node *ilk=NULL;
    struct node *son=NULL;
void sona_ekle(int a,int b){
    struct node *yeni=(struct node*)malloc(sizeof(struct node));
    if(son==NULL){
     ilk=yeni;
     son=ilk;
     yeni->x=a;
     yeni->y=b;
     yeni->next=NULL;
    }else{
    son->next=yeni;
    son=son->next;
    yeni->x=a;
    yeni->y=b;
    son=yeni;
    son->next=NULL;
    }
}
void listeyi_yaz(){
    printf("Liste:\n");
    struct node *e;
    e=ilk;
    while(e!=NULL){
        printf("%d %d \n",e->x,e->y);
        e=e->next;
            }
}
void Uzak_bul(){

    struct node *i;
    struct node *j;
    int x,y;
    i=ilk;
    j=ilk->next;
    int sonuc;
    int enb=0;
    while(i!=NULL){
        while(j!=son){
            sonuc=pow((pow(i->x-j->x,2)+pow(i->y-j->y,2)),0.5);
            if(sonuc>enb){
            enb=sonuc;
            }
        }
    }
    printf("En buyuk: %d",enb);
}
int main()
{

    sona_ekle(1,1);
    sona_ekle(2,2);
    sona_ekle(3,3);
    sona_ekle(6,6);
    listeyi_yaz();
    Uzak_bul();
    return 0;
}
