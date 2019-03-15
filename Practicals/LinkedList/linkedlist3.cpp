/**************************************************************************
 * Write a Program To Perform Singly Linked List of integers with CRUD Operations.
 * 
 * Akhilesh Yadav
 * 14th March, 2019
 ***************************************************************************/

#include<iostream>
#include<cstdlib>
#include<typeinfo>

using namespace std;

#define EXIT 0


struct node{
	string name;
	struct node *next;

};


void insert_front(string nm , struct node **temp){

	//cout <<"\n Type is : :"<< typeid(temp).name() << endl;


	struct node *p = (struct node *)malloc(sizeof(struct node));
	
	if(p){
	
	   p->name = nm;

	   // cout<<"\n---"<<(*temp)<<endl;

	   if((*temp)==NULL){
		p->next = NULL;
 	   }else{
		//cout<<(*temp)->name; 
		p->next = (*temp);
		//cout<<(*temp)->next;	
	   }
	  
	   *temp = p;
	}

}


void insert_back(string nm, struct node **temp){ // Head must not be altered, so pass temp = head and then play with it.

	struct node *p = (struct node *)malloc(sizeof(struct node));
	
	cout<<"Head at :"<<*temp<<endl;

	if(p){
	   p->name = nm;
	   p->next = NULL;
		
		// cout<<(*temp)<<" "<<(*temp)->next;

		while((*temp)->next!=NULL){
			//cout<<" Name "<<temp_ptr->name <<", Address " <<temp_ptr<<endl;
			(*temp) = (*temp)->next;
	   	}
		//cout<<""<<*temp;
		(*temp)->next= p;

	}

}

void display_all(struct node *temp){ //Just accessing element, not altering data of head.
	int i =0;
	while(temp!=NULL){
		i++;
		cout<<"\n("<<i<<")."<<temp->name<<" , Address is :"<<temp;
		temp = temp->next;
	}
}	

void delete_front(struct node **temp){

	// head = p->next;
	//

	*temp = (*temp)->next;

}

void delete_back(struct node **temp){

	struct node *lastPrev;
	while((*temp)->next!=NULL){
		lastPrev = (*temp);
		(*temp) = (*temp)->next;
	}

	cout<<(*temp)<<endl;
	cout<<(lastPrev);

	(lastPrev)->next = NULL;

	//cout<<" - - - "<<lastPrev; invalid

	free(*temp);

}


int main(){

	struct node *head, *temp;
	int user_input, action;

	string name;


	head = NULL;	

	int i = 0;
	
	while(true){


		cout<< R"(

Student Information System
------------------------------
1.Insert at Front.
2.Insert at Back.
3.Delete Front.
4.Delete Back.
5.Display All.
6.Clear Screen.
0.Exit.

Enter Choice:)";
		cin>>action;

		if(action==EXIT)
			break;
		else{

			switch(action){
	
				case 1: cout<<"\nEnter name:";
					cin>>name;
	
				//	cout<<typeid(head).name();

					insert_front(name ,&head);
					break;
			
				case 2: cout<<"\nEnter name:";
					cin>>name;
					temp = head;
					insert_back(name, &temp);
					break;
				
				case 3: delete_front(&head);
					break;

				case 4: temp = head;
					delete_back(&temp);
					break;
				
				case 5: display_all(head);
					break;
				case 6: system("clear");

				default: cout<<"\n Invalid Option.";
			
	
			}

		}

	

	}

	return 0;
}
