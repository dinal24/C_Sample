#include<stdio.h>


int main(){

  int i,j,val=0;
    printf("Enter the value");
    scanf("%d",&i);
    if(i<0) exit(0);
        for(j=1;j<=i;j++){
            if(i%j==0)
            {
                val +=1;
            }
           }
     if(val==2)   printf("prime\n");

    main();

}



