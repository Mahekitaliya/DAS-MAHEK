#include<stdio.h>
#define n 5
int a[n],top = -1;
void display()
{
    int i;
    for(i=0;i<top;i++)
    printf("%d\t",a[i]);
    printf("\n");
}
int insert(int value)
{
    if(top>n-1)

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
int finsert(int value)
{
    int i;
    if(top>=n-1)
    {
        printf("array is full.........\n");

    }
    else if(top<0)
    {
        top++;
        a[top]=value;
    }
    else
    {
        top++;
        for(i= top;i>=0;i--)
        {
            a[i] = a[i-1];
        }
        a[0] = value;
    }

}
int fdelet()
{
    int c,i;
    
    if(top<0)
    {
        printf("array is ematy.........\n");
    }
    else
    {
        for(i= 0;i<top;i++)
        {
            a[i] = a[i+1];
        }
        a[top--] = c;
    }
}
int  main()
{
    int ch;
    printf("1.insert : \n");
    printf("2.delet \n");
    printf("3.frist insert :\n");
    printf("4.frist de;et :\n");
    printf("5.display :\n");
    printf("6.exit : \n");
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
                break;
            case 2 :
                delet();
                break;
            case 3 :
                finsert(70);
                finsert(60);
                break;
            case 4 :
                fdelet();
                break;
            case 5 :
                display();
                break;
            case 6 :
                printf("exit :");
                break;
            defult :
            printf("please enter valid num");

        }
    };
}