/**************************************************************************
 * Write a Program To Perform Singly Linked List of integers with CRUD Operations.
 * 
 * Akhilesh Yadav
 * 14th March, 2019
 ***************************************************************************/

#include<iostream>
using namespace std;

#define EXIT 0

struct node{
	string name;
	struct node *next;

};


void insert_front(struct node **temp){

	struct node *p = (struct node *)malloc(sizeof(struct node));
	
	if(p){
	
	   p->name = "viki";

	   if((*temp)==NULL){
		p->next = NULL;
 	   }else{
		p->next = (*temp)->next;
	   }
	  
	   *temp = p;

	}

}


void insert_back(struct node **temp){

	struct node *p = (struct node *)malloc(sizeof(struct node));
	
	if(p){
	
	   p->name = "akhilesh";

	   if(*temp==NULL){
		p->next = NULL;
 	   }else{
		p->next = (*temp)->next;
	   }
	  
	   *temp = p;

	}

}

void display_all(struct node *temp){

	int i = 0;
	while((temp)){
		cout<<temp->name<<"\t";
		temp = temp->next;
		i++;
	}

	cout<<i;
}	

void delete_front(struct node **temp){

}

void delete_back(struct node **temp){

}


void execute(int action, struct node **head){



}


int main(){

	struct node *head,*temp;
	int user_input, action;

	head = NULL;	
	
	while(true){

		cout<< R"(\n
			1. Insert at Front.
			2.Insert at Back.
			3.Delete Front.
			4.Delete Back.
			5.Display All.
			0.Exit.
			)";
		cin>>action;

		if(action==EXIT)
			break;
		else{
			//execute(action, &head);
			//

			switch(action){
	
				case 1: insert_front(&head);
					break;
				/*
				case 2: insert_back(&head);
					break;
				case 3: delete_front(&head);
					break;
				case 4: delete_back(&head);
					break;
				*/
				case 5: display_all(head);
					break;

				default: cout<<"\n Invalid Option.";

	
			}





		}

		cout<<"\n Sabka head = "<<head->name;

	}

	return 0;
}
