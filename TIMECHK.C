
#include <time.h>
#include <stdio.h>
#include <dos.h>

int main(void)
{
   time_t t1,t2;
   long int i;
   t1 = time(NULL);
   for(i=0;i<=500000000;i++);
   t2 = time(NULL);
   printf("The time taken for executing the for loop = %ld seconds",t2-t1);
   return 0;
}