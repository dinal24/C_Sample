#include <stdio.h>
#define SIZE 5
typedef int pic_type[SIZE][SIZE];
pic_type pic={{1,1,0,1,0}, //global varaible pic of pic_type
              {1,0,0,1,1},
              {1,0,1,1,1},
              {0,1,1,0,1},
              {0,0,1,0,0}};

void printPic(pic_type pic);//function protypes
void erasePic(pic_type pic,int x,int y);//function protypes

int main()
{
printf("Before erasePic:\n");
printPic(pic);

erasePic(pic,3,2);//calling erasePic function to cell (2,3)

printf("After erasePic:\n");
printPic(pic);
return 0;
}

void erasePic(pic_type pic,int x,int y)
{
if( (pic[y][x]==1) && (x>=0) && (x<SIZE) && (y>=0) && (y<SIZE) )
{
pic[y][x]=0;
erasePic(pic,x,y+1);
erasePic(pic,x,y-1);
erasePic(pic,x+1,y);
erasePic(pic,x-1,y);
}
}

void printPic(pic_type pic) //graphical representation of SIZExSIZE matrix
{
int i,j;
printf("\n  ");
for(j=0;j<SIZE;j++)
for(i=0;i<SIZE;i++)
{
     if(pic[j][i]==1)printf(" ");
else if(pic[j][i]==0)printf("%c",219);
if(i==(SIZE-1) )printf("\n  ");
}
printf("\n");
}
