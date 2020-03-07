#include <stdio.h>
#include <stdlib.h>
int asal_mi(int sayi){
     int mod,say=0,j,k=0;



            if(say==0){
                k++;
                return 1;
            }else{
                return 0;
            }

}
int main()
{
    int i,j;
    for(i=99;i>10;i--){
        int say1=0,say2=0,mod;
        for(j=2;j<i;j++){
        mod=i%j;
        if(mod==0)
            say1++;
                }
        for(j=2;j<i-2;j++){
        mod=(i-2)%j;
        if(mod==0)
            say2++;
                }
    if(say1==0 && say2==0){
        printf("%d ve %d asal en buyuk \n",i,i-2);
        break;
    }
    }
    return 0;
}
