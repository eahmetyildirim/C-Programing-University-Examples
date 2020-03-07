#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>
int main()
{
    char c1;
    // isdigit
    /*printf("Karakter giriniz.\n");
    scanf("%c",&c1);
    if(isdigit(c1)){
    printf("%c bir rakamdir.",c1);
    }else{
        printf("%c bir rakam degildir.",c1);
        }*/
    /*printf("Karakter giriniz.\n");
    scanf("%c",&c1);
    if(ispunct(c1)){
    printf("%c bir noktalama isareti.",c1);
    }else{
        printf("%c bir noktalama isareti degildir.",c1);
        }*/

    /* printf("Karakter giriniz.\n");
    scanf("%c",&c1);
    if(isalpha(c1)){
        if(isupper(c1)
                    printf("kucuk harf karsiliði %c \n",tolower(c1));
        if(islower(c1))
                    printf("buyuk harf karsiliði %c \n",toupper(c1));

                    }*/
          /*  char s[50];
            int x;
            long y;
            double z;
            printf("sayi girin");
            gets(s);

            x=atoi(s);
            y=atol(s);
            z=atof(s);
            printf("int %d \n",x);
            printf("long %ld \n ",y);
            printf("double %lf \n",z);*/

            char str[250]="20.30245 Bu kisim yazidir.";
            char *cevirilemeyen_kisim;
            double cevirilen_kisim;
            cevirilen_kisim=strtod(str,&cevirilemeyen_kisim);
            printf("cevirilen kisim : |%f| \n",cevirilen_kisim);
            printf("cevrilmeyen kisim : |%s|",cevirilemeyen_kisim);

    return 0;

    }

