#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayac,carpim,sayi;
    printf("Bir sayi giriniz \n");
    scanf("%d",&sayi);
    carpim=1;
    sayac=1;
    while(sayac<=sayi){

        carpim=carpim*sayac;
        sayac++;
            }

        printf("%d nin faktoryeli: %d ",sayi,carpim);

    return 0;
}
