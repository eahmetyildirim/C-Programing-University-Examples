#include <stdio.h>
#include <stdlib.h>
int karakter_say(char *dizi){
                int i=0;
                while(dizi[i]!='\0'){
                        if(dizi[i]==' '){
                        i++;
                        continue;
                        }

                    i++;
                }
                    return i;
                }
 int rakamSay(char *dizi){
               int i,j,k=0;
               j=karakter_say(dizi);
               for(i=0;i<j;i++){
                 if(dizi[i]=='0' || dizi[i]=='1' || dizi[i]=='2' || dizi[i]=='3' || dizi[i]=='4'|| dizi[i]=='5' || dizi[i]=='6' || dizi[i]=='7' || dizi[i]=='8' || dizi[i]=='9')
                  k++;
                            }
                return k;
                            }
int main()
{
    int i;
    char cumle[100];
    printf("Bir cumle giriniz:\n");
    fgets(cumle,150,stdin);

    printf("Bu paragraf:\n %d karakter.\n%d rakam var.\n",karakter_say(cumle)-1,rakamSay(cumle));


    return 0;
}
