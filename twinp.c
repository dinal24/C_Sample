#include<stdio.h>
int main(){

    int i,j,p1,p2=0,count,c,num,n=0;
scanf("%d" ,&num);
    for(i=1;;i++){
        count=0;
        c=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count += 1;
            }

        }
    if(count==2){
       // printf("%d",i);
        p1=i;

        for(j=1;j<=(p1+2);j++){
        if((p1+2)%j==0){
        c += 1;
        }

        }
        if(c==2){
            p2 = p1+2;
            n+=1;
            printf("prime %d:\t%d,%d\n",n,p1,p2);

        }

        }

    if(num==n)
        {
          // printf("twin %d:\t %d,%d",n,p1,p2);
            break;
        }

    }







}
