#include <stdio.h>
#define N 8
char T[8][8];
void ciz();
void oyuncudan_giris_iste();

int main()
{
    int i,j;
    for(i=0;i<N;i++){

        for(j=0;j<N;j++){

            T[i][j]='.';
                            }

                    }
            ciz();
            oyuncudan_giris_iste();
    return 0;
}
void oyuncudan_giris_iste(){
                        int x,y,k=0;
              while(k<64){
                        while(1){
                            printf("(x y):");
                            scanf("%d %d",&x,&y);
                             if(x<0 || x>=N || y<0 || y>=N){
                               printf("yanlis girildi!!");
                             }else if(T[x][y]!='.'){

                                           printf("dolu");
                                            }else{
                                                   break;
                                                    }

                                }

            printf("S/O ?");
            char c;
            fflush(stdin);
            scanf("%c",&c);
            T[x][y]=c;
            k++;
            printf("\n");
            ciz();

                            }

                        }
void ciz(){

    int i,j;
    printf(" ");
    for(i=0;i<N;i++)
        printf("%d",i);
    printf("\n");

    for(i=0;i<N;i++){
                    printf("%d",i);
                    for(j=0;j<N;j++){
                        printf("%c",T[i][j]);
                    }
                    printf("\n");
                    }
                    printf("\n");


            }
