#include<stdio.h>
main()
{
	char i,j,ch='A';
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if((i-j)%2==1)
			{
				printf(" 0");
			}
			else
			{
				printf(" 1");
			}
		}
		printf("\n");
	}
}
