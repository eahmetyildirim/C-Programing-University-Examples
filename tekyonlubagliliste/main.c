#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};

struct node *ilk=NULL, *son=NULL;

void SonaEkle(int a)
{
    struct node *yeni = (struct node*) malloc(sizeof(struct node));
    yeni->data=a;
    if(ilk==NULL)
    {
        ilk=yeni;
        son=yeni;
        son->next=NULL;
    }
    else
    {
        son->next=yeni;
        son=yeni;
        son->next=NULL;
    }
}
void BasaEkle(int a)
{
    struct node *yeni = (struct node*) malloc(sizeof(struct node));
    yeni->data=a;
    if(ilk==NULL)
    {
        ilk=yeni;
        ilk->next=NULL;
        son=ilk;
    }
    else
    {
        yeni->next=ilk;
        ilk=yeni;
    }
}
struct node *Ara(int x)
{
struct node *ara=ilk;
int sayac=1;
    while(ara!=NULL)
    {
       if(ara->data==x)
          return ara;
      ara=ara->next;
      sayac++;
    }
return -1;
}

void SiraEkle(int a)
{
    struct node *yeni = (struct node*) malloc(sizeof(struct node));
    yeni->data=a;
    if(ilk==NULL)
    {
        ilk=yeni;
        ilk->next=NULL;
        son=ilk;
    }

    else
    {
        if(ilk->data>yeni->data)
        {
            BasaEkle(yeni->data);
        }
      else  if(son->data<yeni->data)
        {
           SonaEkle(yeni->data);
        }
      else{
      struct node *ekle=ilk;
      while(ekle->next->data<yeni->data)
         ekle=ekle->next;
      yeni->next=ekle->next;
      ekle->next=yeni;
      }
    }
}
void Sil(int x)
{
  struct node *sil=ilk,*once=NULL;
   while(sil!=NULL)
    {
      if(sil->data==x) break;
      else
      {
        once=sil;
        sil=sil->next;
    }
    }
    if(sil!=NULL)
       {
          if(sil==ilk)
             {
               ilk=ilk->next;
             }
          else if(sil==son)
            {
              son=once;
              son->next=NULL;
            }
          else
          {
            once->next=sil->next;
          }

        free(sil);
       }


}

void Listele()
{
    struct node *liste=ilk;
    while(liste!=NULL)
    {
        printf("%d\t",liste->data);
        liste=liste->next;
    }
}

int main()
{
    SiraEkle(9);
    SiraEkle(3);
    SiraEkle(12);
    SiraEkle(8);
    SiraEkle(16);
    SiraEkle(13);
    SiraEkle(1);
    Listele();
    Sil(9);
    Sil(1);
    Sil(16);
    Sil(8);
    Sil(12);
    Sil(3);
    Sil(13);
    SonaEkle(15);
    Sil(15);
    BasaEkle(1);
    BasaEkle(2);
    BasaEkle(3);
    printf("\n");
   Listele();
}
