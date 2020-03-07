#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *dizi=(int *)malloc(10*sizeof(int));
    dizi[0]=4;
    *(dizi+1)=5;
    printf("%d",*(dizi+1));
    return 0;
}
