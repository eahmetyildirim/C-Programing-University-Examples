#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,N=3;
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int transpose[3][3];
   /* printf("Matriks kodlarini giriniz.\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){

            printf("(%d,%d) elemana sayi giriniz :",i,j);
            scanf("%2d",&mat[i][j]);

                        }
                    }*/
        printf("Matris \n");
      for(i=0;i<3;i++){
            printf("\n");
        for(j=0;j<3;j++){
                printf(" %2d ",mat[i][j]);
                        }
                    }

         //transpoze

         for(i=0;i<3;i++){
                for(j=0;j<N;j++){
                            transpose[j][i]=mat[i][j];
                                }
                        }
        printf("\n------------------------------ \n");
        printf("Matrisin transpozesi \n");
        for(i=0;i<3;i++){
            printf("\n");
                for(j=0;j<3;j++){
                printf(" %2d ",transpose[i][j]);
                        }
                    }

        printf("\n ------------------------------");

    return 0;
}
