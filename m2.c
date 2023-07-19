#include<stdio.h>
int main()
{
    int a = 1, b = 1,c;
    c = --a || --b;   // 010 011    
    printf("a: %d, b: %d, c:%d\n",a,b,c);
    // c = ++a || --b;   // 211 201    
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
    // c = ++a || ++b;   // 221    
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
    // c = ++a || b;   // 211    
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
    // c = a || b;   // 111    
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
    // c = a && --b;   // 100    
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
    // c = --a && --b;   
    // printf("a: %d, b: %d, c: %d\n",a,b,c);
    // c = --a && ++b;   
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
    // c = ++a && ++b; // 2 2 1  
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
    // c = a && b; 
    // printf("a: %d, b: %d, c:%d\n",a,b,c);
}