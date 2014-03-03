#include<stdio.h>


int main(){

  int y=0,x,m ,c ,p;
    printf("Enter the value m & c");
    scanf("%d %d",&m ,&c);
    for(x=10;x>=0;x--)
    {
        y = m*x + c;
        p=x;
        printf("|");
        while(p>=0)
        {
            printf(" ");
            if(p==0)
            {printf("*\n");}
             p--;
        }

    }

    main();

}



