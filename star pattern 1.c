#include <stdio.h>
#include <stdlib.h>
main()
{
	int a,b,i,j;
	printf("enter the number of rows:");
	scanf("%d",&a);
	b=a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
