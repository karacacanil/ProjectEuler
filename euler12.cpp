#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(void)
{
	int divisor=0,sum=0,counter=0;
	
	for(int i=1; i<INT_MAX; i++)
	{
		for(int j=i; j>0; j--)
		{
		    sum+=j;
		}
		for(int k=1; k<=sum; k++)
		{
			divisor=sum%k;
			if(divisor==0)
			counter++;
		}
		if(counter>500)
		{
			printf("Answer:%d",sum);
			puts("");
			break;
		}
		else
		{
			counter=0;
		    sum=0;
		}
	}
	
	system("pause");
	return 0;
}
