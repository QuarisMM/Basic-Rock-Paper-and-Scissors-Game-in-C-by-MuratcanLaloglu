#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tas=1;
    int kagit=2;
    int makas=3;
    int i;
    int oyuncunun_puani =0;
    int bilgisayarin_puani =0;
    int secim;
    srand(time(NULL));
    printf("TAS= 1 , KAGIT= 2, MAKAS= 3\n");

    for(i=0;i<5;i++){
        printf("SECIMINIZI GIRIN:");
        scanf("%d",&secim);
            int bilgisayar=rand()%3+1;
            if(secim==1){
                if(bilgisayar==1){
                    printf("BERABERE\n");
                }
                if(bilgisayar==2){
                    printf("BILGISAYAR KAZANDI\n");
                    bilgisayarin_puani= bilgisayarin_puani + 1;
                }
                if(bilgisayar==3){
                    printf("KAZANDIN\n");
                    oyuncunun_puani = oyuncunun_puani + 1;
                }
            }
              else  if(secim==2){
                    if(bilgisayar==2){
                        printf("BERABERE\n");
                    }
                    if(bilgisayar==3){
                        printf("KAZANDIN\n");
                        oyuncunun_puani = oyuncunun_puani + 1;
                    }
                    if(bilgisayar==1){
                        printf("BILGISAYAR KAZANDI\n");
                        bilgisayarin_puani = bilgisayarin_puani + 1;
                    }
                }
                else if(secim==3){
                    if(bilgisayar==3){
                        printf("BERABERE\n");
                    }
                    if(bilgisayar==2){
                        printf("BILGISAYAR KAZANDI\n");
                        bilgisayarin_puani = bilgisayarin_puani + 1;
                    }
                    if(bilgisayar==1){
                        printf("KAZANDIN\n");
                        oyuncunun_puani = oyuncunun_puani + 1;

                    }
                }
        else{
            printf("YANLIS CEVAP\n");
        }

            }
            if(bilgisayarin_puani > oyuncunun_puani ){
                printf("BILGISAYAR %d e %d KAZANDI\n",bilgisayarin_puani,oyuncunun_puani);
            }
            else if(bilgisayarin_puani < oyuncunun_puani ){
                printf("%d a %d KAZANDIN\n",oyuncunun_puani,bilgisayarin_puani);
            }
           else if(bilgisayarin_puani = oyuncunun_puani ){
                printf("KAZANAN YOK! BERABERE\n");
            }



    return 0;
}

