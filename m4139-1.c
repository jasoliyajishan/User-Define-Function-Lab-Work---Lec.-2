#include<stdio.h>

main()

{
	int a[100][100];
	int i,j,r,c;
	
	printf("enter row size : ");
	scanf("%d",&r);
	printf("enter column size : ");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	
}
