#include <stdio.h>
/*void func(int x);
int y=0;
int main()
{


int x=0;
func(x);
func(x);
}

void func(int x)
{
    int y=3;
    y++;
x++;
printf("%d,%d",x,y);

}
*/
int main()
{
    int num=0,temp;
    scanf("%d",&temp);
     for(;;)
    {
        if(temp==0) break;
        num = num*10+(temp%10);
        temp = (int)(temp/10);
        printf("%d\n",temp);
    }
   // printf("%d",num);
}
