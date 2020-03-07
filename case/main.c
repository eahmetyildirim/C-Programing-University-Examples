#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not;
    int aSay =0,bSay =0,cSay =0,dSay =0,fSay =0;
    printf("Harf notlarýný giriniz.\n");
    printf("Cikis icin EOF karakterini giriniz.\n");
    while((not=getchar())!= '1' ){

     switch(not){
        case'A':case'a':
            ++aSay;
            break;

         case'B':case'b':
            ++bSay;
            break;

         case'C':case'c':
            ++cSay;
            break;

         case'D':case'd':
            ++dSay;
            break;

         case'F':case'f':
            ++fSay;
            break;

         case'\n':
            break;

         default:
            printf("Yanlýþ harf notu girdiniz\n");
            printf("Yeni not giriniz");
            break;
         }

    }

   printf("\n Her harf notu icin toplam:\n");
   printf("A:%d \n",aSay);
   printf("B:%d \n",bSay);
   printf("C:%d \n",cSay);
   printf("D:%d \n",dSay);
   printf("F:%d \n",fSay);
    return 0;
}
