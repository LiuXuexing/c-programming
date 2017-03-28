#include <stdio.h>

int main()
{
	int num;
	int i1, i2, i3;

	printf("Enter a three-digit number: ");
	scanf("%d", &num);
	
	i1 = num / 100;
	i2 = (num / 10) % 10;
	i3 = num % 10;

	printf("The reversal is: %d%d%d\n", i3, i2, i1);

	return 0;
}
