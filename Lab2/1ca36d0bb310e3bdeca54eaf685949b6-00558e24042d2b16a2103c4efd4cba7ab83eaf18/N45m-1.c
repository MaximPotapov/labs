#include <stdio.h>

int main(void)
{
	int x[10];
	int i;
	float result, sum;
	for(i=0; i<10; i++)
	{
		scanf("%d", &x[i]);
	}
	sum = 0;
	for(i=1; i<10; i+=2)
	{
		sum = sum + x[i];
		if(x[i]%2 == 0)
		{
			printf("%d\n", x[i]);
		}
		}
	result = sum/5;
	printf("Average is %f\n", result);
	return 0;
	
}