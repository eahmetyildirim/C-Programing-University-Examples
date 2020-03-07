#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("deneme2.txt","r");
    char str[500];
       rewind(dosya);

    fscanf(dosya,"%s",str);
    fclose(dosya);
    printf("%s",str);
    return 0;
}
