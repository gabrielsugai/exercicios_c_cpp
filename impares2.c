#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i,x;
	scanf("%i", &x);
i = 1;
	while(i<=6)
	{
		if(x%2 !=0)
		{
			printf("%i\n", x);
			x++;
			i++;
		}
		else{
			x++;
		}
	}
	return 0;
}