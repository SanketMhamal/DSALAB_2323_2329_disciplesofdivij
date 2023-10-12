#include<stdio.h>
#include "postfixevaluation.h"
#include "utils.h"
#include "merge.h"
#include "stack.h"
#include "filesort.h"
#include "match.h"
#include "dijkstra.h"
#include "infixtopostfix.h"
#include "binarytree.h"
#include <stdlib.h>
int main()
{ int n,ret,c;
char expression[30];
int result;
char postfix[30];
int graph[V][V] = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}
    };
int m, value;
    Node* root = NULL;
Stack s1;
   do
   {
   	printf("\nenter 1: For merge sort \nenter 2:for add \nenter 3:for insertion sort \nenter 4 for postfix evaluation \n\nenter 0:for exit");
	printf("\nenter 5:bracketmatching \nenter 6:shortest path algo\nenter 7:binary tree 8:infix to postfixevauluation");
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
		 case 6: printf("Shortest path");
		  
    int src = 0; // Specify the source vertex.

    dijkstra(graph, src);
		break;
		
	 case 7:do{
		printf("\n enter 1:insert node \n 2:preorder \n 3:postorder \n 4:inorder");
   	scanf("%d",&c);
	switch(c)
	{
		case 1:
		 printf("Enter the number of nodes: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insert(&root, value);
    }
		break;
		case 2:preorderTraversal(root);break;
		
		case 3:inorderTraversal(root);
		case 4:postorderTraversal(root);
		default :c=0;
	}
   	
	 }
	 while(c);
	 free(root);
	 
	 
	 break;
	   case 8: printf(" enter Infix expression");
        
		scanf("%s",expression);
		infixToPostfix(expression, postfix);
		
	   result= evaluate(postfix);  
	  
        printf("Result= %d\n", result);
         break; 

   	  case 0:break;
   	  default: printf("\n\nInvalid go home\n\n");
	   }
	  
   }while(n);
   return 0;
}

