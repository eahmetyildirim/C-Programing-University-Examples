#include <stdio.h>
#include <stdlib.h>
int eleman_sayisi=2;
int asal_mi(int sayi){
    int i;
    for(i=2;i<sayi;i++){
        if(sayi%i==0){
            return 0;
        }
    }
    return 1;
}
void fibbonacci(int ilk ,int ikinci,int eleman){

    if(eleman!=eleman_sayisi){
        if(asal_mi(ilk+ikinci)==1){
        printf(" %d(Asal)",(ilk+ikinci));
                }else{
        printf(" %d ",(ilk+ikinci));
                }
        eleman_sayisi++;
        fibbonacci(ikinci,ilk+ikinci,eleman);
    }else{
        return;
    }


}
int main()
{
    printf("0 1");
    fibbonacci(0,1,20);
    return 0;
}
