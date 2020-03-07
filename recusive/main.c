#include <stdio.h>
#include <stdlib.h>
int topla();
int main()
{
    int n;
    printf("Sayib giriniz\n");
    scanf("%d",&n);
    printf("toplam : %d",topla(n));
    return 0;
}
topla(int n){
        if(n==0)
            return 0;

        return  n+topla(n-1);

      }
