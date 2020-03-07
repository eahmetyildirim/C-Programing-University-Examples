#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    while(1){
    printf("Bir harf giriniz:\n");
    scanf("%c",&harf);
    fflush(stdin);
    if(harf=='0' || harf=='1' || harf=='2'|| harf=='3'|| harf=='4'|| harf=='5'|| harf=='6'|| harf=='7'|| harf=='8'|| harf=='9'){
        printf("Bu bir rakam\n");
    }else{
        switch(harf){
        case 'a':
            printf("Sesli harf\n");
            break;
        case 'A':
            printf("Sesli harf\n");
            break;
        case 'ı':
            printf("Sesli harf\n");
            break;
        case 'I':
            printf("Sesli harf\n");
            break;
        case 'i':
            printf("Sesli harf\n");
            break;
        case 'İ':
            printf("Sesli harf\n");
            break;
        case 'e':
            printf("Sesli harf\n");
            break;
        case 'E':
            printf("Sesli harf\n");
            break;
        case 'o':
            printf("Sesli harf\n");
            break;
        case 'O':
            printf("Sesli harf\n");
            break;
        case 'ö':
            printf("Sesli harf\n");
            break;
        case 'Ö':
            printf("Sesli harf\n");
            break;
        case 'u':
            printf("Sesli harf\n");
            break;
        case 'U':
            printf("Sesli harf\n");
            break;
        case 'ü':
            printf("Sesli harf\n");
            break;
         case 'Ü':
             printf("Sesli harf\n");
            break;

        default:
            printf("Sessiz harf\n");
        }

    }
    }
    return 0;
}
