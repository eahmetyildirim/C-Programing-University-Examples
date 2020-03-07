#include <stdio.h>
#include <string.h>
void karakter_say(char *cumle){
                int i,j;
            for(i=0;i<strlen(cumle);i++){
                    if(cumle[i]==' '){
                    continue;
                    }
                    int k=1;

                    for(j=i+1;j<strlen(cumle);j++){
                    printf("%c ile %c esit mi? \n",cumle[i],cumle[j]);
                            if(cumle[i]==cumle[j]){
                                    k++;
                                    cumle[j]=' ';
                                    printf("yeni k degeri:%d \n",k);
                                                }

                                                }
                    printf("%c:%d adet.\n",cumle[i],k);
                            }

                            }

int main()
{
    char cumle[200];
    printf("Bir cumle giriniz :");
    fgets(cumle,200,stdin);
    karakter_say(cumle);

    return 0;
}
