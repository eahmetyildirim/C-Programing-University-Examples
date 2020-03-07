#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int a,b[4556],i,sonuc=0,mod,us;
    printf("Sekizlik sayinin rakamlarini giriniz \n");
    scanf("%d",&a);
i=0;
     while(a>0){
        mod=a%10;
        a=a/10;
        us=pow(8,i);
        i++;
        sonuc=sonuc+mod*us;
     }
    printf("Onluk karsiligi : %d",sonuc);

    return 0;
}
