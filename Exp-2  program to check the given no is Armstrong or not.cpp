#include<stdio.h>
int main()
{
	int n,on,r,sum=0;
	printf("Enter the number =");
	scanf("%d",&n);
	while(on!=0)
	{
		on=on%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==n)
	printf("Not An Armstron number");
	else
	{
		printf("An armstrong number");
	}
}