/*
the sum of all the primes below two million.
*/
#include<stdio.h>
#include<math.h>
#include<stdint.h>
#include<stdlib.h>

int main()
{
	int temp;
	int64_t sum=2;
	
	for(int i=3; i<2000000; i+=2)
	{
		temp=0;
		
		for(int j=2; j<=sqrt(i); j++)
		{
			if(i%j==0)
			{
				temp++;
				break;
			}	
		}
		if(temp==0)
		{
			sum+=i;
			printf("Prime number>%d\n",i);
		}
	}
	
	printf(">>>>>>> %lld <<<<<<<",sum);

    system("pause");
	return 0;
}
