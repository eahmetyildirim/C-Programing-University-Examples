#include <stdio.h>
#include <conio.h>

int basTop(int x){ //fonksiyonumuzu oluþturduk.
    int top=0,basamak_degeri;
    int gecici = x;
    while(gecici>0){ //döngü kurduk
        basamak_degeri= gecici%10;
        top+=basamak_degeri;
        gecici=gecici/10;
    }
    return top; //fonksiyondan deðeri döndürdük.
}

int main(){
    int a;
    printf("sayi girin: "); scanf("%d",&a);
    printf("Basamaklarin toplami: %d\n\n",basTop(a));
    return 0;
}
