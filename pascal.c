#include<stdio.h>

int n,r;

int main()
{
    int i=1;
    for(n=0;n<10;n++)
    {
        for(r=0;r<=n;r++)
        {  if(r==0 || r==n){printf("1 "); continue;}

            printf("%d ",nCr(n-r+1,r));

        }
    printf("\n");
    }

}


int nCr(int m,int i)
{
    if(i==1||i==0)
    {
        return n/1 ;
    }


        return m/i*nCr(m-i+1,i--);


}
