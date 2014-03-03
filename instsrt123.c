#include<stdio.h>


int main()
{
    int arg[]={3,2,5,7,4};
    int i=4;
    sort(arg,i);
}

void sort(int arg[],int i)
{
    int j=1;
    while(j<=i)
    {
        int x=j;
        while(x-1>=0)
        {   if(arg[j]<arg[x-1])
            {
                arg[x]=arg[x-1];
                if(x==1)
                {
                    arg[x-1]==arg[j];
                }

            }
            else
            {
              //  arg[x]=arg[j];
               // break;
            }

            --x;
        }
        j++;
    }
    int s=0;
    while(s<=i)
    {
        printf("%d ",arg[s]);
        s++;
    }
}
