#include "main.h"

/**
 * _sqrt_helper-Helps to find the natural square root of a number.
 * @n:Number to find the square root of.
 * @i:Current number to check as the potential square root.
 * Return:The square root if found, otherwise -1.
 */
int _sqrt_helper(int n, int i)
{
if(i*i>n)
return(-1);
if(i*i==n)
return(i);
return(_sqrt_helper(n,i+1));
}

/**
 *_sqrt_recursion-Returns the natural square root of a number.
 *@n:Input number.
 *Return:Natural square root, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
if(n<0)
return(-1);
return(_sqrt_helper(n,1));
}
