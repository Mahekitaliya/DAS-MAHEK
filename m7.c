#include<stdio.h>
#define n 5
int a[n], top = -1;
void display()
{
    int i;
    for(i=0;i<=top;i++)
        printf("%d\t",a[i]);
        printf("\n");

}
int insert(int value)
{
    if(top>=n-1)
    {
    printf("array is full....\n");
    }
    else
    {
        top++;
        a[top] = value;

    }

}
int delet()
{
    if(top<0)
    {
        printf("array is enpty.........");
    }
    else{
        top--;
    }
}
int  main()
{
    int ch;
    printf("1.insert : \n");
    printf("2.delet \n");
    printf("3.display :\n");
    printf("4.exit : \n");
    while(ch!=4)
    {
        printf("enter choise : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                insert(10);
                insert(20);
                insert(30);
                insert(40);
                insert(50);
                insert(60);
                break;
            case 2 :
                delet();
                break;
            case 3 :
                display();
                break;
            case 4 :
                printf("exit :");
                break;
            defult :
            printf("please enter valid num");

        }
    };
}