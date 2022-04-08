#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d",n," is %d ",lastd,"and is greater than 5\n");
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d ",n,"is %d",lastd," and is 0\n");
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d",n," is %d",lastd," and is less than 6 and not 0\n");
	}
	/* your code goes there */
	return (0);
}
