#include <stdio.h>
#include <stdlib.h>
int enbEnkbul(int *dizi,int n,int *enb,int *enk){
    int i;
    *enb=*enk=*dizi;
    for(i=0;i<n;i++){
                if(*(dizi+i)>*enb)
                    *enb=*(dizi+i);
                    }
    for(i=0;i<n;i++){
               if(*(dizi+i)<*enb)
                    *enk=*(dizi+i);
                    }

                    }
int main(){
    int dizip[6]={10,15,44,4,5,2};
    int enbuyuk;
    int enkucuk;
    enbEnkbul(dizip,6,&enbuyuk,&enkucuk);
    printf("En buyuk :%d \n",enbuyuk);
    printf("En kucuk :%d",enkucuk);
    return 0;
}
