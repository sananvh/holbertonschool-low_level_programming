#include<stdlib.h>
#include<time.h>
#include<stdio.h> 
/* betty style doc for function main goes here */
int main(void)
{int n;
srand(time(0));
n = rand() % 201 - 100;
if(n > 0)
printf("%d is positive\n", n);
else if(n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
