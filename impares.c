#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i,x;
	scanf("%i", &x);
	
	for(i=1;i<=x;i++)
	{
		if(i%2 != 0)
		{
			printf("%i\n", i);
		}
	}
	return 0;
}