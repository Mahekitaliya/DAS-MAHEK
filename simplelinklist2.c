#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
struct node *head = NULL;
void dispaly()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("list is empty");
    }
    else{
        while(ptr !=NULL)
        {
            printf("%d   ",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
void insert(int val){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof (struct node) );

    temp->data = val;
    temp->next = NULL;

    if(head==NULL)
    {
        head = temp;
        return;

    }
    while(ptr->next!=NULL)
        ptr = ptr->next;
    ptr->next = temp;
    return;
}
void deletend()
{
    struct node *ptr = head;
    struct node *p;
    if(head->next==NULL)
    {
        head =NULL;
        free(ptr);
        return;

    }
    while(ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;

    }
    p->next = NULL;
    free(ptr);
    return;
}
void firstinsert(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof (struct node) );

    temp->data = val;
    temp->next = NULL;

    if(head==NULL)
    {
        head = temp;
        temp->next=NULL;
        return;

    }
    
    else{
        ptr->next!=NULL;
        ptr=head;
        temp->next=ptr;
        head=temp;
        return;
    }
}
void firstdelet()
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
}
void midinsert(int val,int p)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof (struct node) );
    temp->data=val;
    while(ptr->data!=p)
        ptr=ptr->next;
    temp->next=ptr->next;
    ptr->next=temp;
}
void middelet(int val,int p)
{
    struct node *ptr = head;
    struct node *p;
    while(ptr->data != pos)
   {
    p = ptr;
    next=ptr->next;
   }
   p->next= ptr->next;
    free(ptr);

}

    int main()
    {
        insert(100);
        insert(200);
        insert(300);
        insert(400);
        insert(500);
        insert(600);
        insert(700);
        insert(800);
        dispaly();
        //deletend();
        //deletend();
        //deletend();
        //deletend();
        //deletend();
        //deletend();
        //deletend();
        //dispaly();
        firstinsert(48);
        //dispaly();
        //firstdelet();
         //firstdelet();
         //dispaly();
         midinsert(620,600);
        // dispaly();
        middelet();
        dispaly();
    }

