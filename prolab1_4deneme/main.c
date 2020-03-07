#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct rezervasyon{
    char kullanici_id[50];
    char yer_id[50];
    char zaman[50];
    char enlem[50];
    char boylam[50];
    char sehir[20];
    char kategori[40];
} rezervasyon[10000];
int k_sayisi=0;
struct rezervasyon_d{
    char Yer_id[50];
    char Rezervasyon_zamani[50];
    char Enlem[50];
    char Boylam[50];
    char Sehir[50];
};
struct kullanici{
    char kullanici_id[50];
    char kategori_ismi[50];
    int rezervasyon_sayisi;
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
void kategori_ekle(char x[50]){
        int i,j;
        struct kategori *root2=(struct kategori *)malloc(sizeof(struct kategori));
        struct kategori *yeni_kategori=(struct kategori *)malloc(sizeof(struct kategori));
        strcpy(yeni_kategori->Kategori_ismi,x);
        int say=0;
        if(root==NULL){
        root=yeni_kategori;
        root2=root;
        puts(root2->Kategori_ismi);
        root2->diger=NULL;
        }else{
        root2=root;
        while(root2->diger!=NULL){
            if(strcmp(root2->Kategori_ismi,x)==0){
            printf("%s %s ye esittir.",root2->Kategori_ismi,x);
            say++;
            break;
            }
            root2=root2->diger;
            }
        if(say==0){
        root2->diger=yeni_kategori;
        root2->diger->diger=NULL;
        }
        }






}
void alt_kategori_ekle(char anakategori_adi,char x[50]){
        int say=0;
        struct kategori *root2=(struct kategori *)malloc(sizeof(struct kategori));
        struct kategori *yeni_kategori=(struct kategori *)malloc(sizeof(struct kategori));
        strcpy(yeni_kategori->Kategori_ismi,x);
        root2=root;
        while(root2->alt_kategori!=NULL){
            if(strcmp(root2->Kategori_ismi,yeni_kategori->Kategori_ismi)==0){
            printf("Bu alt kategori zaten ekli");
            say++;
            }
            root2=root2->alt_kategori;
            }
        if(say==0){
        root2->alt_kategori=yeni_kategori;
        root2->alt_kategori->alt_kategori=NULL;
        root2->alt_kategori->diger=NULL;
        }
}
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
void oku(){
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
                //dizi_bosalt(oku);
            }
            i=0;
            dizi_bosalt(oku);
            continue;
        }
        if(c=='\n' && say==7)
        {
            //bosluk_sil(oku);
            strcpy(rezervasyon[j].kategori,oku);
            puts(rezervasyon[j].kategori);
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
    struct rezervasyon_d *yeni_rezervasyon=(struct kullanici *)malloc(sizeof(struct kullanici));
    struct kategori *root3=(struct kategori *)malloc(sizeof(struct kategori));
    struct kategori *root4;
        if(root==NULL){
        strcpy(yeni_kategori->Kategori_ismi,kategoriler[0]);
        root=yeni_kategori;
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
       // printf("Altina kategori eklenecek kategori: %s \n",root2->Kategori_ismi);

        int t;
          root3=root2;
          root3=root3->alt_kategori;
          struct kategori *root5;;
        for(j=1;j<ikinokta+1;j++){
            printf("Dongu sirasi:%d  ve %s nin altindaki %s eklenecek  \n",j,kategoriler[j-1],kategoriler[j]);

            if(j!=1){

            root3=root2;
            root3=root3->alt_kategori;
              if(strcmp(root3->Kategori_ismi,kategoriler[j-1])==0){
              printf("%s ile %s esittir \n",root3->Kategori_ismi,kategoriler[j-1]);

            }else{
            while(root3->diger!=NULL){
               int say=0;
                if(strcmp(root3->Kategori_ismi,kategoriler[j-1])==0){
              printf("%s ile %s esittir \n",root3->Kategori_ismi,kategoriler[j-1]);
               say++;
               break;
            }
            root3=root3->diger;
                        }//altýna ekleme yapacagýmýz kategoriyi bulan döngü

                }
            printf("geldimiz alt kat: %s \n",root3->Kategori_ismi);
            root3=root3->alt_kategori;
            // dogru
            for(t=0;t<j;t++){
                if(root3==NULL){
                printf("nullmis \n");
                break;
                }
               printf("dongunu ustu %s alt: %s \n ",root3->Kategori_ismi,root3->alt_kategori->Kategori_ismi);
               if(root3->alt_kategori==NULL){
                printf("dsfs");
                break;
               }
            printf("Dongude. root3 degeri:%s\n",root3->Kategori_ismi);
            root3=root3->alt_kategori;
            }
        }//J KONTROL SONU
             strcpy(yeni_altkategori->Kategori_ismi,kategoriler[j]);
            if(root3==NULL){
                if(j!=1){
            printf("ekleme: %s \n",root3->Kategori_ismi);

            root3=yeni_altkategori;
            root3->diger=NULL;
            root3->alt_kategori=NULL;
            printf("ekleme: %s \n",root3->Kategori_ismi);
                }else{
                    printf("else girdi");
            root2->alt_kategori=yeni_altkategori;
            root2->alt_kategori->diger=NULL;
            root2->alt_kategori->alt_kategori=NULL;
                    }
           // printf("%s nin alt kategorisi %s \n",root2->Kategori_ismi,root2->alt_kategori->Kategori_ismi);
            }else{

            int say=0;
            while(root3->diger!=NULL){
            if(strcmp(root3->Kategori_ismi,kategoriler[j])==0){
              printf("%s ile %s esittir \n",root3->Kategori_ismi,kategoriler[j]);
               say++;
               break;
            }
            root3=root3->diger;
                        }
            if(say==0){
            root3->diger=yeni_altkategori;
            root3->diger->diger=NULL;
            root3->diger->alt_kategori=NULL;
          //   printf("%s nin alt kategorisi %s \n",root2->Kategori_ismi,root3->diger->Kategori_ismi);
                }
            }
        }
    }
}
void agac_yaz(){
    struct kategori *root2;
    struct kategori *root3;
    struct kategori *root4;
    if(root!=NULL){
    root2=root;
    printf("Liste: \n");
    while(root2!=NULL){
        printf("%s \n",root2->Kategori_ismi);
        root3=root2->alt_kategori;
            while(root3!=NULL){
               root4=root3;
                while(root4!=NULL){
                printf(" %s\n",root4->Kategori_ismi);
                root4=root4->diger;
                }
            root3=root3->alt_kategori;
            }
        root2=root2->diger;
            }
   }else{
   printf("Agacda veri yok!\n");
   }
}
int main()
{
    oku();
    agac_olustur();
    printf("Simdiki agac");
    agac_yaz();
    printf("%s",root->diger->diger->alt_kategori->alt_kategori->Kategori_ismi);
    return 0;
}
