#include <stdio.h>
#include <stdlib.h>


/*
**	Had lfunction power, kteb fiha lcode dialek
**	Khassek tgadha bach twelli tcalculi a ouss b
**	ou returni ljawab li l9iti
*/

int	power(int a, int b)
{
	return (0);
}

/*
**	AUTOMATIC CHECK, MA TKTEB WALOU HNA
*/

int	internal_implementation(int a, int b)
{
	int result = 1;
	while (b--)
		result *= a;
	return (result);
}

int	checker(int a, int b)
{
	int my_result;
	int your_result;

	my_result = internal_implementation(a, b);
	your_result = power(a, b);
	if (my_result == your_result)
		printf("a=%d, b=%d [OK]\n", a, b);
	else
	{
		printf("a=%d, b=%d [ERROR]\n", a, b);
		printf("Your result %d, correct result %d\n", your_result, my_result);
		exit(1);
		return (0);
	}
	return (1);
}

int main(void)
{
	checker(1, 1);
	checker(0, 5);
	checker(5, 0);
	checker(2, 9);
	checker(10, 5);
	printf("Congrats, Everything Is Correct\n");
	return (0);
}
