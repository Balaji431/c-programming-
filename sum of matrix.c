#include <stdio.h>
main()
{
	int a[3][3];
	int b,c,d=0;
	printf("Enter The Matix elements:\n");
	for(b=0;b<3;b++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&a[b][c]);
		}
	}
	for(b=0;b<3;b++)
	{
		for(c=0;c<3;c++)
		{
			d+=a[b][c];
		}
	}
	printf("The Sum of The Matrix Elements is %d",d);
	printf("The Average Of the Matrix Elemnts is %d",d/9);
}
Footer
