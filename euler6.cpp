#include<stdio.h>
#include<math.h>

int main()
{
	int sum_sq=0,sq_sum;

	sq_sum=pow(((100*101)/2),2);
	
	for(int i=1; i<101; i++)
	{
		sum_sq=sum_sq+pow(i,2);
	}
	
	printf("%d",sq_sum-sum_sq);
	return 0;
}
