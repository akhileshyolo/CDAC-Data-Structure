#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};


void show_top(struct node *temp) {

	while(temp->next!=NULL){
		//cout<<"\n---"<<temp->data<<endl;
		temp = temp->next;
                cout<<temp->data<<"\t";
	}

	cout<<"Last element is :"<<temp->data<<endl;
}


int main(){

	
	int amount;	
	
	struct node *head, *temp;
	

	struct node *p1 = (struct node *)malloc(sizeof(struct node));
	struct node *p2 = (struct node *)malloc(sizeof(struct node));		
	struct node *p3 = (struct node *)malloc(sizeof(struct node));	
	struct node *p4 = (struct node *)malloc(sizeof(struct node));	
	struct node *p5 = (struct node *)malloc(sizeof(struct node));	
	struct node *p6 = (struct node *)malloc(sizeof(struct node));	
	
	head = p1;

	//Manual	
	p1->next = p2;
	p1->data = 10;
	
	p2->data = 100000;
	p2->next = p3;

	p3->data = 34534;
	p3->next = NULL;
	

	// Insertion at front

	amount = 50000;

	p4->data = amount;
	p4->next = head->next;

	head = p4;

	cout<<head->data<<endl;
        temp=head;
        cout<<"After insertion at front"<<" ";
        show_top(temp);

	// Insertion at End

	p5->data = 2000;
	p5->next =NULL;
        

	temp = head;

	while(temp->next!=NULL){
		//cout<<"\n---"<<temp->data<<endl;
		temp = temp->next;
	}

	cout<<temp->next<<endl;
	temp->next=p5;
        cout<<"After insertion at end :"<<endl;
	temp = head;
	show_top(temp);

	// Insertion at Middle

	p6->data=4000;
        temp=head;
	
	while(temp->data!=50000)
	{
        p6->next=p3->next;
	p3->next=p6;
        } 

	cout<<p3->data<<" "<<p6->data;
        cout<<"After insertion in middle :"<<endl;
     	temp=head;
        show_top(temp);
        return 0;
}
