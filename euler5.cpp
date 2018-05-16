#include<stdio.h>
#include<limits.h>

int main(void)
{
	int temp=0,temp2=0;
	
	for(int i=21; i<=INT_MAX; i++)
	{
		for(int j=10; j<=20; j++)
		{
			temp=i%j;
			if(temp==0)
			{
				temp2++;
				continue;
			}
			else
			{
				temp2=0;
				break;
			}	
		}
		if(temp2==11)
		{
		printf("The smallest number that is evenly divisible by all of the numbers from 1 to 20 is %d",i);
		break;
	    }
	}
	
	return 0;
}
