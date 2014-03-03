#include "stdio.h"

int main()
{
   int N,A,B,C;

   scanf("%d %d %d %d", &N,&A,&B,&C);
   printf("You entered: %d %d %d %d" ,N,A,B,C);

   return 0;
}

int calc(int N,int A,int B,int C){
    int i,j,k,track=0,temp=0;
    for(i=0;i<A;i++){
        temp+=i;

        for(j=0;j<B;j++){
            temp+=j;

            for(k=0;k<C;k++){
                temp+=k;
                if(temp =< N ){ track++; }
            }
            temp = i+j;
        }
        temp = i;
    }
    return track;
}
