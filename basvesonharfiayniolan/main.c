#include <stdio.h>
#include <string.h>

int main()
{
    char x[5][50]; int i,y[5];
    printf("Isimleri giriniz(isimlerden once ve sonra bosluk birakmayiniz!)\n");
    for(i=0;i<5;i++)
        scanf("%s \n ",x[i]);

     for(i=0;i<5;i++)
        y[i]=strlen(x[i]);
    printf("Ilk ve son harfi ayni olanlar\n");
     for(i=0;i<5;i++){
            int s=y[i];
            if(x[i][0]==x[i][s-1])
                printf("%s \n",x[i]);

                        }



    return 0;
}
