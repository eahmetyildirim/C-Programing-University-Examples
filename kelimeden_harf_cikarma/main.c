#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bulcikar(char *kelime,char *s){
        int i,j,kelime_uzunluk, s_uzunluk,k=0,indis;// �kisininde uzunlu�unu buldum.
        kelime_uzunluk=strlen(kelime);
        s_uzunluk=strlen(s);
        for(i=0;i<kelime_uzunluk;i++){
            for(j=0;j<s_uzunluk;j++){
                if(kelime[i]==s[j]&&kelime[i+1]==s[j+1]){
                                k++;//E�er kelime varsa k s_uzunlu�un bir eksi�i olucak
                                indis=i;
                                }
                                    }

                                        }
                        indis++;
                    if(k==s_uzunluk-1){
                            for(i=indis-k;i<=indis;i++){
                                   kelime[i]=kelime[i+s_uzunluk];//Burda kelimeyi dizide �ne �ektim.
                                   kelime[i+s_uzunluk]=' ';

                                                        }
                                        }
                    for(i=0;i<kelime_uzunluk;i++)
                    if(kelime[i]==' '&&kelime[i+1]!=' '){
                                        kelime[i]=kelime[i+1];//Bunu yazmasayd�m ahmet ten ah � ��kard�m ..met oluyor met diye yazmasu i�in bunu yazd�m
                                        kelime[i+1]=' ';
                                        i=0;
                                                            }




                            }
int main()
{
    char kelime[200],s[40];
    printf("Kelimeyi giriniz:");
    gets(kelime);
    printf("Cikartilicak kelimeyi giriniz:");
    gets(s);
    bulcikar(kelime,s);
    printf("%s \n",kelime);
    return 0;
}
