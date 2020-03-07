#include <stdio.h>
#include <string.h>

int main()
{

    char cumle[200];
    int i,x[200],k=0;
    printf("Cumleyi giriniz\n");
    fgets(cumle,200,stdin);
    for(i=0;i<strlen(cumle);i++){
                        if(cumle[i]==' '){
                            x[i]=0;
                                }else{
                            x[i]=1;
                                        }

                                }
              if(x[0]==1)
                k=1;
       for(i=0;i<strlen(cumle);i++){

                           if(x[i]==0 && x[i+1]==1){
                            k++;
                                                    }
                                }
        printf("Bu cumlede %d sozcuk vardir.",k);
    return 0;
}
