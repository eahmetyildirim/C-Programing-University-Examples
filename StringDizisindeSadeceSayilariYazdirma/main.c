#include <stdio.h>
#include <string.h>
void bul(char *dizi){
    int i,j,k=0,z,s[20];
    char sayilar[10]={'0','1','2','3','4','5','6','7','8','9'};
        for(i=0;i<strlen(dizi);i++){
                        for(j=0;j<10;j++){

                                    if(dizi[i]==sayilar[j]){
                                        k++;
                                        s[i]=dizi[i];
                                        printf("%c",dizi[i]);
                                        break;
                                        }
                                       }
                                   if(k>0 && dizi[i]!=sayilar[j])
                                        break;

                                }
                                printf("\n");
                                         printf("Diziden ekrana yazdirilan:\n");
                                        for(i=0;i<s[i]!='\0';i++){
                                            printf("%c",s[i]);
                                             s[i]=' ';
                                            if(s[i]==' ')
                                                continue;

                                                                }
                printf("\n\n");
            }
int main()
{

    char x1[20]="123 istanbul";
    char x2[20]="12moskava45";
    char x3[20]="tok3yo5";
   char  x4[20]="berlin82n";
        bul(x1);
        bul(x2);
        bul(x3);
        bul(x4);
    return 0;
}
