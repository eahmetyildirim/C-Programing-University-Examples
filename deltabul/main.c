#include <stdio.h>
#include <stdlib.h>

int deltabul(int a,int b,int c){
        int delta =(b*b)-4*(a*c);
        if(delta>0){
                    return delta;
                    }else if(delta<0){
                                return -1;
                                    }else if(delta ==0){return 0;}

                                }
int main()
{
    int a,b,c,delta;
    printf("a yi giriniz \n");
    scanf("%d",&a);
    printf("b yi giriniz \n");
    scanf("%d",&b);
    printf("c yi giriniz \n");
    scanf("%d",&c);
    delta =deltabul(a,b,c);
    if(delta>0){
            printf("Iki farkli kok vardir \n");
            float kok1 =(float)(-b+pow(delta,0.5))/(2*a);
            float kok2 =(float)(-b-pow(delta,0.5))/(2*a);
            printf("Kok1 : %.1f \n",kok1);
            printf("Kok2 : %.1f \n",kok2);
    }else if(delta<0){
        printf("kok yoktur!!");
        }else if(delta==0){
                        printf("Bir tane reel koku vardir.");
                        float kok=(float)-b/(2*a);
                        printf("Kok : %.1f",kok);
                                    }
    return 0;
}
