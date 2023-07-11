#include<stdio.h>
void main()
{
	  int unit ,bill,sc,total_bill;
	  printf("Enter your unit=");
	  scanf("%d",&unit);
	  if(unit<=50)
	  {
	  	
	  	  bill=unit*50;
	  }
	    else if(unit<=150)
	    {
	    	bill=(unit-50)*.75+25;
	    	
		}
		   else if(unit<=250)
		   {
		   	
		   	  bill=(unit-150)*1.20+75;
		   	  
		   }
		     else if(unit>=250)
		     {
		     	bill=(unit-250)*1.50+125;
		     	
		     	
			 }
			  else
			  {
			  	 printf("please enter a valid unit");
			  	 
			  }
			    sc=bill*20/100;
			    printf("surcharge=%d\n,sc");
			     total_bill=bill+sc;
			    printf("total bill=%d",total_bill);
				
			}
