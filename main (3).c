/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct node
{  
    int data ;
    struct node *link;
};
struct node* add_atfirst (struct node*,int);
struct node* add_at_last (struct node*,int);
int main()

{
    struct node *head =NULL;
    
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=2;
    ptr->link=NULL;
    head=ptr;
    ptr= add_at_last(ptr,3);
    ptr= add_at_last(ptr,4);
    head=add_atfirst(head,5);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d \n",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}
struct node* add_at_last (struct node *ptr,int d)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=d;
    temp->link=NULL;
    ptr->link=temp ;
    ptr=ptr->link;
    return ptr;
}
struct node* add_atfirst (struct node *head,int d)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=d;
    temp->link=NULL;
    temp->link=head;
    head=temp;
    return head;
    
}


