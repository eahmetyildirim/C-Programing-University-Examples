#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void diziyeelemanturet(int dizi[],int n){
    int sayi;
    int i,j,say;
    for(i=0;i<n;i++){
    sayi=rand()%1001+1;
        say=0;
        if(dizi[0]!=NULL)
        for(j=0;j<i;j++){
        if(dizi[j]==sayi)
            say++;
        }
        if(say!=0){
        i--;
        }else{
        dizi[i]=sayi;
        }
    }

}
int main()
{
    int x,i;
    git:
    printf("Dizi boyutunu giriniz:");
    scanf("%d",&x);
    if(x>20){
        printf("20 den kucuk bir sayi giriniz! \n");
        goto git;
            }
    int dizi[x];
    diziyeelemanturet(dizi,x);
    printf("Dizini elemanlari:\n");
    for(i=0;i<x;i++)
    printf("%d ",dizi[i]);
    return 0;
}
