#include <stdio.h>
#include <conio.h>

int basTop(int x){ //fonksiyonumuzu olu�turduk.
    int top=0,basamak_degeri;
    int gecici = x;
    while(gecici>0){ //d�ng� kurduk
        basamak_degeri= gecici%10;
        top+=basamak_degeri;
        gecici=gecici/10;
    }
    return top; //fonksiyondan de�eri d�nd�rd�k.
}

int main(){
    int a;
    printf("sayi girin: "); scanf("%d",&a);
    printf("Basamaklarin toplami: %d\n\n",basTop(a));
    return 0;
}
