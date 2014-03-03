#include <stdio.h>

int main()

{int number='1';
 char r[]="abcdefg %d";
float f;
    switch(number)

{

case 0 :

printf("None ");

break;

case 1 :

printf("One ");

break;

case 2 :

printf("Two ");

break;

case 3 :

case 4 :

case 5 :

printf("Many ");

default :
 f =  number/8;
 printf(r,number,"opoo");
exit(0);
}
}
