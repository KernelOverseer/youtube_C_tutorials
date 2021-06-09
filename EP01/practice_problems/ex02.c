#include <stdio.h>

/*
** Hada exercice talt :
** Had lrogram, 7tahoua kantelbo men utilisateur, idekhel nombre a ou nombre b
** nta ghadi t7sseb, a ouss b, y3ni a puissance b
*/

int main(void)
{
	int a;
	int b;
	int result = 0;

	//hna bach kantleb men utilisateur idekhel numbers
	printf("Enter number (a): ");
	scanf("%d", &a);
	printf("Enter number (b): ");
	scanf("%d", &b);

	// Bda lcode dialek men hna, khdem b printf, ljawab dialek 7tto f lvariable result


	printf("%d ouss %d hia : %d\n", a, b, result);

	return (0);
}

// Hint 1: khdem b while oula for
// Hint 2: khdem b multiplication
