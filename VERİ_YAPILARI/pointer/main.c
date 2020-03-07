#include <stdio.h>
#include <stdlib.h>
void x(int *x,int *y){

        *x=12;
        *y=34;
        }
int main()
{
    int a=4,b=3;
    printf("%d \n",a+b);
    x(&a,&b);
    printf("%d \n",a+b);
    return 0;
}
