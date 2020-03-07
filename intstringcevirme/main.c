#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[16];
    int a=5;
    sprintf(str,"%d",a);
    printf("%s",str);
    return 0;
}
