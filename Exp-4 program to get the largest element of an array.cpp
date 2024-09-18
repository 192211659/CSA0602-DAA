#include<stdio.h>
int main()
{
	int n,a[10],i,big,small;
	printf("Enter the size of array =");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	big=a[0];
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>big)
		big=a[i];
		if(a[i]<small)
		small=a[i];
	}
	printf("\n Biggest array elements=%d",big);
	printf("\n smallest array elements=%d",small);
}
