#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=5;
    char isim[150][50];
    int i,veri[150][2];
    printf("Isimleri giriniz(10 adet)\n");
    for(i=0;i<n;i++)
    scanf("%s",isim[i]);

                   int j,k=0;
            for(i=0;i<n;i++){
                        k=0;
                       for(j=0;isim[i][j]!='\0';j++)
                                        k++;

                                 veri[i][0]=i;
                                 veri[i][1]=k;
                                   }

                    for(i=0;i<n;i++){
                            int x[1][2];
                          for(j=0;j<n-1;j++){
                                if(veri[j][1]<veri[j+1][1]){
                                x[0][0]=veri[j+1][0];
                                x[0][1]=veri[j+1][1];
                                veri[j+1][0]=veri[j][0];
                                veri[j+1][1]=veri[j][1];
                                veri[j][0]=x[0][0];
                                veri[j][1]=x[0][1];
                                        }

                                            }


                                    }
                    printf("Buyukten kucuge siralama               \n");
                    for(i=0;i<n;i++){
                          j=veri[i][0];
                        printf("%s \n",isim[j]);
                        }



    return 0;
}
