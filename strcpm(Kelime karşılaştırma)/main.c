#include <stdio.h>
#include <string.h>
int  alfabetik(char *s1,char *s2){
            while(1){
            if(*s1-*s2!=0)
             break;

            s1++;
            s2++;

            }
        if(*s1-*s2<0){
            return -1;
       }if(*s1-*s2<0){
            return 1;
            }else{
            return 0;
                    }

                    }

int main()
{
    char s1[30],s2[30 ];
    printf("Ilk kelimeyi giriniz\n");
    gets(s1);
    printf("Ikinci kelimeyi giriniz\n");
    gets(s2);
    if(alfabetik(s1,s2)==0)
        printf("Iki kelime esittir.");
    if(alfabetik(s1,s2)==-1)
        printf("%s >%s dir.",s1,s2);
    if(alfabetik(s1,s2)==1)
        printf("%s >%s dir.",s2,s1);

    return 0;
}
