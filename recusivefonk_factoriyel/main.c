#include <stdio.h>
#include <stdlib.h>
int fak(int sayi){
            if(sayi==0){return 1;}
           return sayi*fak(sayi-1);

                    }
int main()
{
    int sayi,sonuc;

    printf("Faktoryelini almak istediginiz sayiyi giriniz!\n");
    scanf("%d",&sayi);
    sonuc =fak(sayi);
    printf("Sonuc : %d \n",sonuc);
    return 0;
}
