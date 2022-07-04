#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 *main -> assign a random number to the variable n each time it is executed and prints out
 *based on a condition
 *Return : always 0 
 */
int main(void) 
{ 
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	if (n > 0)
	{	
	printf("%d is positive\n", n);
	}else if (n == 0)
	printf("%d is zero\n", n); 
	if (n < 0)
=======
 *main - assign a random number to the variable n
 *based on a condition
 *Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
>>>>>>> d2298b2366b9a34f4f0baea9832c552e41e6ed6e
