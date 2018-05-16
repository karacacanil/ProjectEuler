#include<stdio.h>
#include<limits.h>
//10 001st prime number
int main()
{
	int counter=0,temp,temp3=0,prime;
	double temp2;
		for(int i=3; i<INT_MAX; i++)
		{
			for (int j=2; j<i; j++)
			{
				temp2=(double)i/j;
				temp=i/j;
				if(temp==temp2)
			    {
				temp3=0;
				break;
			    }
				else
				temp3++;
			}
			if(temp3==i-2)
			{
				prime=i;
				counter++;
			}
			if(counter==10000)
			break;
		}
	printf("10001th prime number is %d",prime);
	return 0;
}
