#include <stdio.h>
#include <stdlib.h>
void yaz(int x){
    if(x<1)
        return;
    printf("%d",x);
    yaz(x-1);
   // printf("%d \n",x);
    return;
}
int fact(int x){
    if(x<1)
        return 1;

   return x*fact(x-1);

}
int kackisi(int n){
    if(n<=1){
     printf("Sadece ben \n");
     return 1;
    }else{
    printf("Ben ve benden sonra %d kisi var \n",n-1);
    kackisi(n-1);
    return 1;
    }


}
int  fib(int n){
    if(n<=1){

    return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
   // yaz(5);
   // printf("Fakt: %d",fact(5));
   //kackisi(5);
    printf("%d",fib(8));
  // getchar();
    return 0;
}
