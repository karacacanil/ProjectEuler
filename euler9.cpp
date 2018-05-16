/*
A
MAX-332 MÝN-1
B
MAX-499 MÝN-2
C
MAX-997 MÝN-335
*/
#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,temp=0;

	for(a=1; a<332; a++)
	{
		for(b=2; b<499; b++)
		{
			for(c=335; c<997; c++)
			{
				if(a+b+c==1000 && pow(a,2)+pow(b,2)==pow(c,2))
				{
					printf("a=%d\nb=%d\nc=%d\n",a,b,c);
					printf("Product of abc is %lld",a*b*c);
					temp=1;
					break;
				}
			}
			if(temp==1)
			break;
		}
		if(temp==1)
		break;
	}

	return 0;
}
