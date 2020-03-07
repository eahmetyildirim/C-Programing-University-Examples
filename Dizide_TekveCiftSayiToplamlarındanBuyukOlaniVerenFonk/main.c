#include <stdio.h>
#include <stdlib.h>
int buyukToplamiBul(int array[],int boyut){
        int i,c_t=0,t_t=0;
            printf("Cift Sayilar ");
            for(i=0;i<boyut;i++){
                    if(array[i]%2==0){
                        printf("%d ",array[i]);
                        c_t=c_t+array[i];
                                    }
                                }
            printf("\n Cift sayilar toplami : %d \n",c_t);
            printf("Tek Sayilar \n");
            for(i=0;i<boyut;i++){
                    if(array[i]%2==1){
                        printf("%d ",array[i]);
                        t_t=t_t+array[i];
                                    }
                                }
            printf("Tek sayilar toplami : %d\n",t_t);

                if(c_t>t_t){
                        return 1;
                            }else if(t_t>c_t){return 2;}else{return 0;}
                    }
int main()
{
    int n;
    printf("Dizi boyutunu giriniz\n");
    scanf("%d",&n);
    int i,x[n];
    for(i=0;i<n;i++){
        printf("%d inci elemani giriniz ",i+1);
        scanf("%d",&x[i]);
                    }
        int sonuc =buyukToplamiBul(x,n);
                if(sonuc=1){printf("Cift sayilar toplami buyuk");
                    }else if(sonuc=2){
                            printf("Tek sayilar toplamý buyuk");
                            }else{printf("Cift ve tek sayi toplami esit");
           }
    return 0;
}
