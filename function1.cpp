#include<stdio.h>  
#include <string.h>    
struct employee      
{   int id;      
    char name[50];      
}e1;  //declaring e1 variable for structure    



int main( )    
{    
  
   printf("Enter Emp ID and Name\n");
   scanf("%d %s",&e1.id, &e1.name);
   printf( "employee 1 id : %d\n", e1.id);    
   printf( "employee 1 name : %s\n", e1.name);    
return 0;  
} 
