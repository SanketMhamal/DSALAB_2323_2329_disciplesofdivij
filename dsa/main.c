#include<stdio.h>
#include "postfixevaluation.h"
#include "utils.h"
#include "merge.h"
#include "stack.h"
#include "filesort.h"
#include "match.h"
int main()
{ int n,ret;
char expression[30];
int result;
Stack s1;
   do
   {
   	printf("\nenter 1: For merge sort \nenter 2:for add \nenter 3:for insertion sort \n enter 4 for postfix evaluation \n\nenter 0:for exit");
   	scanf("%d",&n);
   	
   	switch(n)
   	{ case 1:
	   file_sort();
   	       break;  
   	  case 2:ret=add(5,10);
		 printf("%d",ret);
   	        break;
   	  case 3:init(&s1);
	        push(&s1,50);
			printf("%d",pop(&s1));
   	        break;
		case 4:   printf("enter postfix expression");
scanf("%s",expression);
      result= evaluate(expression);  
	  
        printf("Result= %d\n", result);
         break; 


		case 5:printf("Bracket matching, enter expression");
        
		scanf("%s",expression);

         if (isMatchingBrackets(expression)) {
              printf("Brackets are balanced!\n");
               } else {
                      printf("Brackets are not balanced!\n");
                              }
        break;
		// case 6: printf("Create tree")
		
	
   	  case 0:break;
   	  default: printf("\n\nInvalid go home\n\n");
	   }
   }while(n);
   return 0;
}
