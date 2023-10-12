// #include<stdio.h>
// #include "postfixevaluation.h"
// #include "stack.h"

// int main()
// { int n,ret;
// char expression[30]= "2+2--43-2";
// int result;
// Stack s1;
//    do
//    {
//    	printf("\nenter 1:for add \n enter 2 for postfix evaluation \nenter 0:for exit");
//    	scanf("%d",&n);
   	
//    	switch(n)
//    	{ 
//    	  case 1:init(&s1);
// 	        push(&s1,50);
// 			printf("%d",pop(&s1));
//    	        break;
// 		case 2:   
//      result= evaluate(expression);  
// printf("Result= %d\n", result);
// break;  
//    	  case 0:break;
//    	  default: printf("\n invalid option");
// 	   }
//    }while(n);
//    return 0;
// }


#include<stdio.h>
#include "postfixevaluation.h"
#include "stack.h"

int main()
{ 
    int n, ret;
    char expression[30];
    int result;
    Stack s1;
    
    do
    {
        printf("\nEnter 1: for add \nEnter 2: for postfix evaluation \nEnter 0: for exit");
        scanf("%d", &n);
        
        switch(n)
        { 
            case 1:
                init(&s1);
                push(&s1,50);
                printf("%d",pop(&s1));
                break;
                
            case 2:
                printf("Enter the postfix expression: ");
                scanf("%s", expression);
                result = evaluate(expression);  
                printf("Result= %d\n", result);
                break;  
                
            case 0:
                break;
                
            default:
                printf("\nInvalid option");
        }
    } while(n);
    
    return 0;
}
