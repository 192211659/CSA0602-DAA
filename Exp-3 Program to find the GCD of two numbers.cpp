#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the two number =");
	scanf("%d %d",&m,&n);
	while(m!=n)
	{
		if(m>n)
		m=m-n;
		else
		n=n-m;
	}
	printf("GCD=%d",m);
	return 0;
}