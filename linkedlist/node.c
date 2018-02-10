#include <stdio.h>
#include<stdlib.h>
struct nd

 {
				
					int data;
					struct nd *next
};
 typedef struct nd node;
 node *head,*first,*second,*temp;
 int main (void)
 {
 	
 	head=(node*)malloc(sizeof(node));
 	first=(node*)malloc(sizeof(node));
 	second=(node*)malloc(sizeof(node));
 	head->data=10;
 	head->next=first;
 	first->data=20;
 	first->next=second;
 	second->data=30;
 	second->next=NULL;
 	temp=head;
 	while(temp!=NULL)
 	{
 		printf("%d",temp->data);
 		temp=temp->next;
 	}
 	return 0;
}
