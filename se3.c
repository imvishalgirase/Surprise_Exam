#include<stdio.h>
void main()
{
	int a,b,c,d;

	printf("enter the value of A=");
	scanf("%d",&a);
    printf("enter the value of b=");

	scanf("%d",&b);
	printf("enter the value of C=");
	scanf("%d",&c);
	printf("enter the value of D=");
	scanf("%d",&d);
	if(a>b)
	{
		if(a>c)
		 {
		 	if(a>d)
		 	{
		 		printf("%d is max",a);
			 }
			 else
			 {
			 	printf("%d is max",d);
			 	
			 }
		 }
			
		else
		
		{
			if(c>d)
			{
				  printf("%d is max",c);
			}
			else
			{
			   printf("%d is max",d);	 
			}
		}
	}
	 else
	 {
	 	  if(b>c)
	 	  {
	 	  	if(b>d)
	 	  	{
	 	  		printf("%d is max",b);
			   } 
			   else
			   {
			   	  printf("%d is max",c);
			   }
		   }
		   else
		   {
		   	  if(c>d)
		   	  {
		   	  	 printf("%d is max",c);
				 }
				 else
				 {
				 	 printf("%d is max",d);
				 }
		   }
}
}
	 
	
