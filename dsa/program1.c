#include<stdio.h>

#include "utils.h"
#include "merge.h"


int main()
{ int n,ret;
   do
   {
   	printf("\nenter 1: For merge sort \nenter 2:for add \nenter 3:for insertion sort \nenter 0:for exit");
   	scanf("%d",&n);
   	
   	switch(n)
   	{ case 1:
	   mergesort();
   	         break;
   	  case 2:ret=add(5,10);
		 printf("%d",ret);
   	        break;
   	  case 3:printf("\n\nInsertion sort\n\n");
   	        break;
   	  case 0:break;
   	  default: printf("\n\nInvalid go home\n\n");
	   }
   }while(n);
   return 0;
}
