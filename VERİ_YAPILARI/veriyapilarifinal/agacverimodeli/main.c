#include <stdio.h>
#include <stdlib.h>
typedef struct agacdugum{
struct agacdugum *soldal;
int data;
struct agacdugum *sagdal;
}agac;

agac *dugumekle(struct agacdugum *agac_dugum,int veri){

    if(agac_dugum==NULL){
        agac_dugum=(struct agacdugum *)malloc(sizeof(struct agacdugum));

            agac_dugum->data=veri;
            agac_dugum->sagdal=NULL;
            agac_dugum->soldal=NULL;
            return agac_dugum;
    }else{
        struct agacdugum *iter=agac_dugum;
            if(veri<iter->data){
                printf("Agacin soluna veri eklendi.\n");
                iter->soldal=dugumekle(iter->soldal,veri);

            }else{
                if(veri>iter->data){
                printf("Agacin soluna veri eklendi.\n");
                iter->sagdal=dugumekle(iter->sagdal,veri);
                }else{
                printf("Esit oldugu icin alinmadi.. \n");
                }
            }

    }
    return agac_dugum;

}
void inorder(agac *dugum){
    if(dugum!=NULL){
        inorder(dugum->soldal);
        printf("%3d",dugum->data);
        inorder(dugum->sagdal);
    }


}
int main()
{
    agac *agacptr=NULL;
    agacptr=dugumekle(agacptr,4);
     dugumekle(agacptr,2);
     dugumekle(agacptr,12);
     inorder(agacptr);
    return 0;
}
