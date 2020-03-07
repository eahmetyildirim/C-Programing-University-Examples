#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct veriler{
    char kullanici_id[50];
    char yer_id[50];
    char zaman[50];
    char enlem[50];
    char boylam[50];
    char sehir[20];
    char kategori[60];
} rezervasyon[10000];
int k_sayisi=0;
int eklenen_r_sayisi=0;
struct rezervasyon_dugumu{
    char Yer_id[50];
    char Rezervasyon_zamani[50];
    char Enlem[50];
    char Boylam[50];
    char Sehir[50];
    struct rezervasyon_dugumu *next;
};
struct kullanici{
    char kullanici_id[50];
    char kategori_ismi[50];
    int rezervasyon_sayisi;
    struct kullanici *next;
    struct rezervasyon_dugumu *rez;
};
struct kategori{
    char Kategori_ismi[50];
    int Alt_kategori_sayisi;
    int Rezervasyon_sayisi;
    char Kategori_yolu[100];
    int Derinlik;
    struct kategori *diger;
    struct kategori *alt_kategori;
    struct kullanici *user;
};
struct kategori *root=NULL;

void dizi_bosalt(char x[]){
    int i;
    for(i=0; x[i]!='\0'; i++)
        x[i]='\0';
}
void bosluk_sil(char x[]){
    int i,j,temp;
    for(i=0; x[i]!='\0'; i++){
        if(x[i]==' '){
            for(j=i;x[j]!='\0';j++){
            x[j]=x[j+1];
            }
        }
        }
}
void dosyayi_oku(){
    FILE *dosya=fopen("rezervasyon.txt","r");
    if(dosya==NULL)
    {
        printf("\nrezervasyon.txt bulunamadi!\n");
    }

    int i=0,say=1,j=0;
    char c;
    char oku[200];
    while ((c=fgetc(dosya))!=EOF)
    {

        if(c==',')
        {
            oku[i]='\0';
            if(say==1)
            {
                strcpy(rezervasyon[j].kullanici_id,oku);
                puts(rezervasyon[j].kullanici_id);
                say++;
            }
            else if(say==2)
            {
                strcpy(rezervasyon[j].yer_id,oku);
                puts(rezervasyon[j].yer_id);
                say++;
            }
            else if(say==3)
            {
                strcpy(rezervasyon[j].zaman,oku);
                puts(rezervasyon[j].zaman);
                say++;

            }
            else if(say==4)
            {
                strcpy(rezervasyon[j].enlem,oku);
                puts(rezervasyon[j].enlem);
                say++;

            }
            else if(say==5)
            {
                strcpy(rezervasyon[j].boylam,oku);
                puts(rezervasyon[j].boylam);
                say++;

            }
            else if(say==6)
            {
                strcpy(rezervasyon[j].sehir,oku);
                puts(rezervasyon[j].sehir);
                say++;
            }
            i=0;
            dizi_bosalt(oku);
            continue;
        }
        if(c=='\n' && say==7)
        {
            strcpy(rezervasyon[j].kategori,oku);
            printf("%s\n",rezervasyon[j].kategori);
            j++;
            i=0;
            dizi_bosalt(oku);
            say=1;
            k_sayisi++;
            printf("-----\n");
            continue;
        }

        oku[i]=c;
        i++;
    }

    fclose(dosya);

}
void agac_olustur(){
    int i,j;
    int ikinokta;
    char *token;
    for(i=0; i<k_sayisi; i++)
    {
        ikinokta=0;
        for(j=0; j<strlen(rezervasyon[i].kategori); j++)
        {
            if(rezervasyon[i].kategori[j]==':')
            {
                ikinokta++;
            }
        }
        if(ikinokta>1)
            continue;
        char kategoriler[ikinokta+1][50];
        int z=0;
        token = strtok(rezervasyon[i].kategori,":");

        while(token != NULL ) {

        strcpy(kategoriler[z],token);
        dizi_bosalt(token);
        token = strtok(NULL,":");
        z++;
            }

    struct kategori *root2;
    struct kategori *yeni_kategori=(struct kategori *)malloc(sizeof(struct kategori));
    struct kategori *yeni_altkategori=(struct kategori *)malloc(sizeof(struct kategori));
    struct kullanici *yeni_kullanici=(struct kullanici *)malloc(sizeof(struct kullanici));
    struct rezervasyon_dugumu *yeni_rezervasyon=(struct kullanici *)malloc(sizeof(struct kullanici));
    struct kategori *root3=(struct kategori *)malloc(sizeof(struct kategori));
    struct kullanici *root4;
    struct rezervasyon_dugumu *root5;
        if(root==NULL){
        strcpy(yeni_kategori->Kategori_ismi,kategoriler[0]);
        root=yeni_kategori;
        root->Rezervasyon_sayisi=0;
        root->diger=NULL;
        root2=root;
        root2->diger=NULL;
        root2->alt_kategori=NULL;
        }else{
        int say=0;
        root2=root;
            while(root2->diger!=NULL){
                if(strcmp(root2->Kategori_ismi,kategoriler[0])==0){
                say++;
                break;
                }
            root2=root2->diger;
            }
        if(say==0){
        strcpy(yeni_kategori->Kategori_ismi,kategoriler[0]);
        root2->diger=yeni_kategori;
        root2->diger->diger=NULL;
        root2->diger->alt_kategori=NULL;
         root2->diger->Rezervasyon_sayisi=0;
        }

        }
        // ANA KATEGORI EKLEME SONU
        root2=root;
        while(root2!=NULL){
            if(strcmp(root2->Kategori_ismi,kategoriler[0])==0){
                break;
            }
            root2=root2->diger;
        }

          root3=root2;
          root3=root3->alt_kategori;


            if(root3==NULL){
            strcpy(yeni_altkategori->Kategori_ismi,kategoriler[1]);
            root2->alt_kategori=yeni_altkategori;
            root2->alt_kategori->diger=NULL;
            root2->alt_kategori->alt_kategori=NULL;
            root2->alt_kategori->user=NULL;
            root2->alt_kategori->Rezervasyon_sayisi=0;
            printf("%s kategerisine %s altkategorisi eklendi.\n",root2->Kategori_ismi,root2->alt_kategori->Kategori_ismi);
             }else{

            int say=0;
            while(root3->diger!=NULL){
            if(strcmp(root3->Kategori_ismi,kategoriler[1])==0){
                say++;
               break;
            }
            root3=root3->diger;
                        }
            if(say==0){
            strcpy(yeni_altkategori->Kategori_ismi,kategoriler[1]);
            root3->diger=yeni_altkategori;
            root3->diger->diger=NULL;
            root3->diger->alt_kategori=NULL;
            root3->diger->user=NULL;
            root3->diger->Rezervasyon_sayisi=0;
            printf("%s kategerisine %s altkategorisi eklendi.\n",root2->Kategori_ismi,root2->alt_kategori->Kategori_ismi);
                }
            }
        // ALT KATEGORİ EKLEME SONU
            root3=root2;
            root3=root3->alt_kategori;
                while(root3->diger!=NULL){
                    if(strcmp(root3->Kategori_ismi,kategoriler[1])==0){
                    break;
                    }
                 root3=root3->diger;
                }
             //   printf("Suanki root3 :%s \n",root3->Kategori_ismi);
                root4=root3->user;
                if(root3->user==NULL){

                strcpy(yeni_kullanici->kategori_ismi,root3->Kategori_ismi);
                strcpy(yeni_kullanici->kullanici_id,rezervasyon[i].kullanici_id);
                yeni_kullanici->rezervasyon_sayisi=0;
                root3->user=yeni_kullanici;
                root3->user->next=NULL;
                root3->user->rez=NULL;
                printf("%s altina %s kullanicisi eklendi %s \n",root3->Kategori_ismi,root3->user->kullanici_id,kategoriler[1]);
                }else{

                    strcpy(yeni_kullanici->kategori_ismi,root3->Kategori_ismi);
                    strcpy(yeni_kullanici->kullanici_id,rezervasyon[i].kullanici_id);
                    int say=0;
                    while(root4->next!=NULL){
                    if(strcmp(root4->kategori_ismi,kategoriler[1])==0 && strcmp(root4->kullanici_id,rezervasyon[i].kullanici_id)==0){
                    say++;
                    break;
                    }
                    root4=root4->next;
                    }
                    if(say==0){
                    root4->next=yeni_kullanici;
                    root4->next->next=NULL;
                    root4->next->rez=NULL;
                    printf("%s altina %s kullanicisi eklendi \n",root3->Kategori_ismi,root4->next->kullanici_id);
                    }else{
                  printf("%s altinda %s kullanicisi zaten ekli. Eklenmek istenen %s \n",root3->Kategori_ismi,root4->kullanici_id,rezervasyon[i].kullanici_id);
                    }
                }// KULLANICI EKLEME SONU
               /* root4=root3->user;
               while(root4!=NULL){
                    if(strcmp(root4->kullanici_id,rezervasyon[i].kullanici_id)==0){
                    break;
                    }
                    root4=root4->next;
                    }
            printf("%s kategerosinin %s alt kategorisindeki %s kisine rezervasyon baglanacak.\n",root2->Kategori_ismi,root3->Kategori_ismi,root4->kullanici_id);
                root5=root4->rez;

                if(root4->rez==NULL){
              //  printf("2 \n");
                strcpy(yeni_rezervasyon->Boylam,rezervasyon[i].boylam);
                strcpy(yeni_rezervasyon->Enlem,rezervasyon[i].enlem);
                strcpy(yeni_rezervasyon->Rezervasyon_zamani,rezervasyon[i].zaman);
                strcpy(yeni_rezervasyon->Sehir,rezervasyon[i].sehir);
                strcpy(yeni_rezervasyon->Yer_id,rezervasyon[i].yer_id);
                //printf("4 \n");
                root4->rez=yeni_rezervasyon;
                root4->rez->next=NULL;
                root4->rezervasyon_sayisi++;
                root3->Rezervasyon_sayisi++;
                root2->Rezervasyon_sayisi++;
                      }else{
             //   printf("1\n");
                strcpy(yeni_rezervasyon->Boylam,rezervasyon[i].boylam);
                strcpy(yeni_rezervasyon->Enlem,rezervasyon[i].enlem);
                strcpy(yeni_rezervasyon->Rezervasyon_zamani,rezervasyon[i].zaman);
                strcpy(yeni_rezervasyon->Sehir,rezervasyon[i].sehir);
                strcpy(yeni_rezervasyon->Yer_id,rezervasyon[i].yer_id);
                    while(root5->next!=NULL){
                    root5=root5->next;
                    }
                     root3->Rezervasyon_sayisi++;
                root2->Rezervasyon_sayisi++;
                    root4->rezervasyon_sayisi++;
                    root5->next=yeni_kullanici;
                    root5->next->next=NULL;
                    printf("3-%s-%s-%s-%d \n",root4->kullanici_id,root4->kategori_ismi,root5->next->Sehir,root4->rezervasyon_sayisi);
                  //  printf("5 \n");
                printf("Rez eklendi.\n");
                }*/

                       eklenen_r_sayisi++;
    }
}
void agac_yazdir(){
    struct kategori *root2;
    struct kategori *root3;
    struct kullanici *root4;
    struct rezervasyon_dugumu *root5;
    if(root!=NULL){
    root2=root;
    printf("Agac verileri: \n");
    while(root2->diger!=NULL){
        printf("Kategrori:%s \n",root2->Kategori_ismi);
        if(root2->alt_kategori!=NULL){
            root3=root2;
            root3=root3->alt_kategori;
        printf("----------------------------------------------\n");
                int h=1;
                printf("\t  Alt Kategori:\n");
                while(root3!=NULL){
                printf("\t  %d-%s ",h,root3->Kategori_ismi);
                h++;
                printf("|Rezervasyon sayisi:%d \n",root3->Rezervasyon_sayisi);
                    if(root3->user!=NULL){
                        root4=root3->user;
                        int user_sayi=0;

                        printf("\t  Kullanici:\n");
                        while(root4!=NULL){
                        printf("\t\t    %d- %s \n",user_sayi+1,root4->kullanici_id);
                        root5=root4->rez;
                            int x=1;

                            if(root5!=NULL){
                                while(root5!=NULL){
                                printf("\t\t\t%d-|Sehir: %s |",x,root5->Sehir);
                                printf(" Boylam: %s |",root5->Boylam);
                                printf(" Enlem: %s |",root5->Enlem);
                                printf(" Yer_id: %s |\n",root5->Yer_id);
                                root5=root5->next;
                                x++;
                                }
                            }
                        root4=root4->next;
                        user_sayi++;
                        }
                    }
                root3=root3->diger;
                }

        }
        root2=root2->diger;
            }
   }
}
int main()
{
    dosyayi_oku();
    agac_olustur();
    agac_yazdir();
    printf("%d rezervasyon bilgisi eklendi.",eklenen_r_sayisi);
    return 0;
}
