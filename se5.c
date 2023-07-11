#include<stdio.h>
void main()
{
	  int n,i,r=0,p;
	  printf("enter the num=");
	  scanf("%d",&n);
	  i=n;
	  while(i>0)
	  {
	  	  p=i%10;
	  	  r=(r*10)+p;
	  	  i=i/10;
	  }
	    if (n==r)
	    {
	    	   printf("%d is pallindrom",n);
	    	   
		}
		else
		{
			  printf("%d is not pallindrome",n);
		}
}
