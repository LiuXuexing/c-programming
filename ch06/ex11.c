#include <stdio.h>

int main()
{
	int n;
	float e = 1.0f;

	printf("Enter an number: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		int term = 1;
		for(int j = 1; j <= i; j++){
			term *= j; 
		}
		e += 1.0f / term;
	}

	printf("e = %.7f\n", e);


	return 0;
}
