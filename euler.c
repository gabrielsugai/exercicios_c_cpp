#include <stdlib.h>
#include <stdio.h>

int main()
{
	float e, fat;
	int i,n,j;
	scanf("%i", &n);
	e = 1;

	for(i = 1; i <=n; i++)
	{
		fat = 1;
		for(j = 1; j<=i;j++)
		{
			fat = fat*j;
		}
		e = e+(1/fat);
	}

	printf("%f", e);
	return 0;
}
