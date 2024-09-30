#include <stdio.h>
int main() 
{
   int p,r,t;
   float si;
   printf("Principal:");
   scanf("%d",&p);
   printf("Rate of intrest:");
   scanf("%d",&r);
   printf("Time:");
   scanf("%d",&t);
   si=(p*r*t)/100.00;
   //(float)(p*r*t)/100 method 2
   printf("The simple intrest:%.2f",si);
   return 0;
}
