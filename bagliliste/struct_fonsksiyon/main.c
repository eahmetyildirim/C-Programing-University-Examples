#include <stdio.h>
#include <stdlib.h>
struct tarih{
            int gun;
            int ay;
            int yil;
            };
 struct tarih tariholustur(int g,int a,int y){
                        struct tarih t;
                      if(a>12 || g>31 ){
                            t.gun=0;
                            t.ay=0;
                            t.yil=0;
                                        }else{
                            t.gun=g;
                            t.ay=a;
                            t.yil=y;
                                                }
                      /*  int sonuc,mod;
                        if(g>31){
                            sonuc=g/31;
                            if(sonuc>1){
                                mod=g%31;
                                    if(mod>0){
                                        t.gun=mod;
                                        a=a+sonuc;
                                        }else if(mod==0){
                                        t.gun=31;
                                        a=a+sonuc-1;
                                             }
                                }
                                    }
                        //GÜN DÜZENLEMESÝ SONU
                        if(a>12)
                            sonuc=a/12;
                            if(sonuc>1){
                                mod=a%12;
                                    if(mod>0){
                                        t.ay=mod;
                                        y=y+sonuc;
                                        }else if(mod==0){
                                        t.ay=12;
                                        y=y+sonuc-1;
                                             }
                                }*/

                                return t;
                                       }
int main()
{
    struct tarih t1;
    t1=tariholustur(12,3,1920);
    printf("%d-%d-%d",t1.gun,t1.ay,t1.yil);
    return 0;
}
