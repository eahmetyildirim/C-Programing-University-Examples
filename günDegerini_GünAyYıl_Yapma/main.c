#include <stdio.h>
#include <stdlib.h>
ayristir(int sayi,int *gun,int *ay,int *yil){
           *yil=sayi/365;
           *ay=(sayi-(*yil*365))/30;
           *gun=(sayi-(*yil*365)-(*ay*30));
}


int main()
{
    int sayi,gun,ay,yil;
    printf("Gun degerini giriniz\n");
    scanf("%d",&sayi);
    ayristir(sayi,&gun,&ay,&yil);
    printf("Bu sure %d yil  %d ay  %d gundur",yil,ay,gun);
    return 0;
}
