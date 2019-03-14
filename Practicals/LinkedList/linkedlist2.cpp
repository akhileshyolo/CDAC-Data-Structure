#include<iostream>
using namespace std;

struct node{

	int roll;
	
	struct node *next;

};


void insert(int roll, struct node **temp){

	struct node *p = (struct node *)malloc(sizeof(struct node));
	p->roll = roll;

	if(*temp==NULL){
		p->next = NULL;

	}else{
		p->next = (*temp)->next;
	}
	*temp = p;


	//cout<<p->roll<<" - \t Head at "<<*temp<<" , Next Addr  "<<(*temp)->next;
	

}

void show(struct node **temp){

	while((*temp)->next!=NULL){
		cout<<(*temp)->roll<<"\t";

	}
}	


int main(){

	struct node *head,*temp;
	int number;

	cout<<"Enter no.of Students to enter data:";
	cin>>number;

	head = NULL;	

	int i=0;
	while(i<number){
		
		insert(i*10, &head);
		i++;
		//cout<<"\n Inside While loop , head at "<<head;
		//break;
	}

	show(&head);
	
	return 0;
}
