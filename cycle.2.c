#include <stdio.h>
main()
{
	int a[20];
	int c,d,e,f,g=0;
	printf("Enter the Number of Elements you want to enter:");
	scanf("%d",&c);
	printf("Enter The Elements of an array:");
	for(e=0;e<c;e++)
	{
		scanf("%d",&a[e]);
	}
	for(e=0;e<c;e++)
	{
		if(a[e]<0)
		{
			g+=1;
		}
	}
	printf("The Number of Negative Numbers in Your Array is:%d",g);
}
