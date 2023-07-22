/*
    operator -> arithmetic  --> + - * / %
                relational  --> < <=, > >=, == , !=
                logical     --> && , || , !
                assignment  --> +=, -=, *=, /=, %=  
                unary       --> ++, --
                ternory     --> ? :

    for ,while, do while -> revision
                 
    AND -> first zero than no check condition
    OR -> first One than  no check condition
*/

#include<stdio.h>
int main()
{
    int a = 1, b = 1,c = 1, d;

    d = a && --b || ++c;           
    printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    // d = a || --b && ++c; 
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    // d = a || --b || ++c;  
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    // d = --a || --b || ++c;       
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    // d = --a || ++b || ++c;       
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    // d = --a && ++b && ++c;       
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    // d = a && --b && --c;        
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    // d = a && --b && c;   
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
    // d = a && b && c;  
    // printf("a: %d, b: %d, c: %d, d: %d\n",a,b,c,d);
}
    


    