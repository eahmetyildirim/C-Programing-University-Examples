#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,sayi3;
    float ort,toplam;
    printf("1.sayiyi giriniz\n");
    scanf("%d",&sayi1);
    printf("2.sayiyi giriniz\n");
    scanf("%d",&sayi2);
    printf("3.sayiyi giriniz\n");
    scanf("%d",&sayi3);
    toplam =sayi1+sayi2+sayi3;
    ort =toplam/3;
    printf("Ortalama : %f \n",ort);
    if(sayi1>ort){
        printf("%d Sayisi ortalamadan buyuktur.\n",sayi1);
    }
    if(sayi2>ort){
        printf("%d Sayisi ortalamadan buyuktur.\n",sayi2);
    }
    if(sayi3>ort){
        printf("%d Sayisi ortalamadan buyuktur.\n",sayi3);
    }
    return 0;
}
