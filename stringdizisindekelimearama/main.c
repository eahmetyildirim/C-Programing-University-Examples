#include <stdio.h>
#include <string.h>
int say(char *dizi){
        int i=0;
        while(dizi[i]!='\0'){
                    i++;
                            }
                     return i-1;
                }
int ara(char *dizi,char *aranan){
            int i,j;
            for(i=0;i<say(dizi)-say(aranan);i++){
                for(j=0;j<say(aranan);j++){
                    if(dizi[i+j]==aranan[j])
                        k++;
                                            }

                                                }

                    return k;

                                }
int main()
{
    char x1[200],x2[200],x3[200],y[50];
    int i,j,k=0,toplam=0;
    printf("3 satirlik bir yazi yaziniz.\n");
    fgets(x1,200,stdin);
    fgets(x2,200,stdin);
    fgets(x3,200,stdin);
    printf("Aranacak kelimeyi giriniz.");
     fgets(y,50,stdin);

        for(i=0;i<say(x1);i++){
                for(j=0;j<say(y)-1;j++){
                    if(x1[i+j]==y[j] )
                        k++;
                                }

                                }
                     toplam +=k;
                     k=0;
                for(i=0;i<say(x2);i++){
                for(j=0;j<say(y);j++){
                    if(x2[i+j]==y[j])
                        k++;
                                }

                                }
                        toplam +=k;
                        k=0;
                   for(i=0;i<say(x3);i++){
                for(j=0;j<say(y)-1;j++){
                    if(x3[i]==y[j] && x3[i+1]==y[j+1])
                        k++;
                                }

                                }
                     toplam +=k;


                printf("Girilen cumlelerde %d adet -%s- vardir.",toplam,y);


    return 0;
}
// korkma sonmez bu safaklarda yuzen al sancak
// sonmeden yurdumun ustunde tuten en son ocak
// o benim milletimin yildizidir parlayacak
