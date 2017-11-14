#include <stdio.h>
# i am going to add a function here 
int main(void)
{
  int x = 34;
  int y = 50;

  printf("x is %i\n",x );
  printf("y is %s\n",y );

  int temp = x;
  x = y ;
  y = temp;


  printf("x is now %s\n",x );
  printf("y is now %s\n",y );
}
A
