#include<stdio.h>

void getNum();
int show(int y);
void saveFile();

int i,x;

int main()
{
   getNum();
}

void getNum()
{
    FILE *fp;
    fp=fopen("fabser.txt","r");
    fscanf (fp, "%d", &i);
    printf("output:\n%d",show(i));
    saveFile();
}

int show(int y)
{
  if(i==y)  printf("Input:\n%d\n",i);

    if(y==1)
    {
        return 1;
    }
    if(y==0)
    {
        return 0;
    }

   return x=show(y-2)+show(y-1);

}

void saveFile()
{
    FILE *fp;
    fp=fopen("fabres.txt","w");
    fprintf(fp,"result:%d",x);
}


