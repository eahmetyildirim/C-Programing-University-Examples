#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,toplam=0;
   printf("Bir sayi giriniz:");
   scanf("%d",&x);
   while(x!=0){
    int mod=x%10;
    toplam=toplam+mod;
    x=x/10;
                }

    return 0;
}
