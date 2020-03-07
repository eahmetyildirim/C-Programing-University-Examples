#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a[4],y;
    printf("4 basamakli sayiyi giriniz:\n");
    scanf("%d",&x);
    y=x%10;
    a[3]=y;
    x=x/10;
    y=x%10;
    a[2]=y;
    x=x/10;
    y=x%10;
    a[1]=y;
    x=x/10;
    y=x%10;
    a[0]=y;

    int x1,x2,y1,y2,s1,s2;
    x1=a[0]*10+a[1];
    x2=a[2]*10+a[3];
    y1=a[1]*10+a[0];
    y2=a[3]*10+a[2];
    s1=x1*x2;
    s2=y1*y2;
    if(s1==s2){
        printf("Sayi bir tersyuz sayisidir.");
    }else{
    printf("Sayi tersyüz sayisi degildir.");
    }
    return 0;
}
