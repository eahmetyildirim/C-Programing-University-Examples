#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("text.txt","r");
    /*if(dosya!=NULL){
            char c;

                    while((c=fgetc(dosya))!=EOF){
                    printf("%c",c);
                    if(c==' '){
                    printf("\n");
                               }
                               }


                    }else{
                        printf("Dosyaya erisilemiyor..!!");
                        exit(1);
                            }*/
       char buf[100];
       if(dosya==NULL){
            printf("dosya yok");
            exit(1);
                        }else{
                                int satir=0;
                                while(fgets(buf,100,dosya)!=NULL){
                                        satir++;
                                    printf("%d satir %s",satir,buf);
                                                                }

                                }

    fclose(dosya);
    return 0;
}
