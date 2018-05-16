#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int asal(int long long);
main()
{
	int long long number=600851475143;
	int prime,sonuc;
	for(int c=2;c<=number;c++)
	{
		if(number%c==0) //bölenler alýndý
		{
			sonuc=asal(c);
			if(sonuc==1)
			{
				prime=c;
				printf("%d\n",prime);
			}
			
		}	
	}
	return 0;
}
int asal(int long long sayi)
{
	for(int i=2;i<=sayi/2;i++)
	{
		if(sayi%i==0)
		return 0;
	}
	return 1;
}
