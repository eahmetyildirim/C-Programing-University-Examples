#include <stdio.h>
#include <conio.h>

 int ogr_no = 123456;
 int ogr_sifre = 12345;

int ogr_kontrol(int no, int sifre){ //fonksiyonumuzu oluþturduk.

    if( (ogr_no == no) && (ogr_sifre == sifre) ){
        printf("\nGirdiginiz bilgiler dogru.\n");
    }else{
        printf("\nGirdiginiz bilgiler yanlis.\n");
    }

}

int main(){
    int ogr_num,ogr_sif;
    printf("Ogrenci numarasini girin >");
    scanf("%d",&ogr_num);

    printf("Ogrenci sifresini girin >");
    scanf("%d",&ogr_sif);

    ogr_kontrol(ogr_num, ogr_sif);


    return 0;
}
