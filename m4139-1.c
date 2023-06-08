#include<stdio.h>
calc(int n)
{

      int i,a,b;
      do{
          printf("enter your choice");
          scanf("%d",&n);
      	if(n==6)
      	{
      		printf("exit....\n");
		  }
		  else if(n>6)
		  {
		  	printf("plz proper choice enter.\n");
		  }
		  else if(n<6)
		  {
		  	switch(n)
		  	{
		  		case 1:
		  			printf("enter value a : ");
		  			scanf("%d",&a);
		  			printf("enter value b : ");
		  			scanf("%d",&b);
		  			printf("adition of %d+%d=%d\n",a,b,a+b);
		  			break;
		  		case 2:
		  			printf("enter value a : ");
		  			scanf("%d",&a);
		  			printf("enter value b : ");
		  			scanf("%d",&b);
		  			printf("substraction of %d-%d=%d\n",a,b,a-b);
		  			break;
		  		case 3:
		  			printf("enter value a : ");
		  			scanf("%d",&a);
		  			printf("enter value b : ");
		  			scanf("%d",&b);
		  			printf("multiplication of %d*%d=%d\n",a,b,a*b);
		  			break;
		  		case 4:
		  			printf("enter value a : ");
		  			scanf("%d",&a);
		  			printf("enter value b : ");
		  			scanf("%d",&b);
		  			printf("division of %d/%d=%d\n",a,b,a/b);
		  			break;
		  		case 5:
		  			printf("enter value a : ");
		  			scanf("%d",&a);
		  			printf("enter value b : ");
		  			scanf("%d",&b);
		  			
		  			printf("moduls of a&b=%d\n",a%b);
		  			break;
		  		}
			  }
		  }while(n<6);
	  
}

main()
{
	int n;
	printf("press 1 to addtion\n");
	printf("press 2 to substration\n");
	printf("press 3 to multiplication\n");
	printf("press 4 to division\n");
	printf("press 5 to moduls\n");
	printf("press 6 to exit\n");

	calc(n);
}
