#include<stdio.h>
#include<math.h>

int main(){


    char star='*';
    //signed int k;
    int i,j;
        for(i=-5;i<6;i++){
        unsigned int k=sqrt(i*i);
           // printf("%d",k);
           if(i==0 || i==1) continue;
            for(j=0;j<k;j++){
            printf("%c",star);
           }
        printf("\n");
        }







}
