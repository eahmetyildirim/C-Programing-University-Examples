#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,kucuk;
    printf("iki tam sayi giriniz\n");
    scanf("%d %d",&a,&b);
    if(a>b)
        kucuk=b;
    else kucuk=a;
    while(a%kucuk!=0 && b%kucuk!=0){
        kucuk--;
    }
    printf("Ebob : %d \n",kucuk);
    int ekok =(a*b)/kucuk;
    printf("Ekok : %d \n",ekok);
    return 0;
}
