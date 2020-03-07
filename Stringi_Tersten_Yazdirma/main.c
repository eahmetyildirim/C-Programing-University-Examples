#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int kelime_say(char *cumle){
        int i,k;
            if(cumle[0]==' ')
                k=0;
            if(cumle[0]!=' ')
                k=1;
            for(i=0;cumle[i]!='\0';i++){
                    if(cumle[i]==' ' && cumle[i+1]!=' ')
                                k++;
                                        }
                return k;

                            }
void devrikYap(char *cumle){
        int i,s=kelime_say(cumle),j=0,k;
        char x[4][20];
        char *ayrac=" ";
        char *kelime=strtok(cumle,ayrac);
        while(kelime!= NULL){
            printf("%s \n ",kelime);
            strcpy(x[j],kelime);
            kelime =strtok(NULL,ayrac);
            j++;
                            }
            for(i=s-1;i>=0;i--)
            printf("%s ",x[i]);
}
int main()
{
    char cumle[100]="baharda agaclar kuslar guzeldir";
    devrikYap(cumle);

    return 0;
}
