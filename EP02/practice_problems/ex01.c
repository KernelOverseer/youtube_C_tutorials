#include <stdio.h>
#include <stdlib.h>


/*
**	Had lfunction interval_sum, kteb fiha lcode dialek
**	Khassek tgadha bach twelli tcalculi lmajmou3 dial les nombres
**	li kaynin men min, 7tal max ou returni ljawab li l9iti
**	matalan interval_sum(1, 5), khass t3tik lmajmou3 dial les nombres
**	men 1 7tal 5, li hia 15
*/

int	interval_sum(int min, int max)
{
	return (0);
}

/*
**	AUTOMATIC CHECK, MA TKTEB WALOU HNA
*/

int	internal_implementation(int min, int max)
{
	int result = 0;

	for (int i = min; i <= max; i++)
		result += i;
	return (result);
}

int	checker(int a, int b)
{
	int my_result;
	int your_result;

	my_result = internal_implementation(a, b);
	your_result = interval_sum(a, b);
	if (my_result == your_result)
		printf("min=%d, max=%d [OK]\n", a, b);
	else
	{
		printf("min=%d, max=%d [ERROR]\n", a, b);
		printf("Your result %d, correct result %d\n", your_result, my_result);
		exit(1);
		return (0);
	}
	return (1);
}

int main(void)
{
	checker(1, 100);
	checker(0, 5);
	checker(5, 10);
	checker(-5, 10);
	checker(50, 50);
	printf("Congrats, Everything Is Correct\n");
	return (0);
}
