/*
   A program to demonstrate linked list operations

   Live demo

   14th March 2019

   MMJoshi
*/

#include <iostream>
using namespace std;

#define QUIT 9
#define DISPLAY 2
#define INSERT 1

struct student {
       int roll_number;
       struct student *next;
};

// inserts new_obj in the list whose head is given by beg 
// function returns true in case object is added successfully
bool insertObj(struct student **beg, struct student *new_obj) {

      cout << "Beginning of dump from insertObj\n";
      cout << new_obj->roll_number;
      cout << new_obj;
      cout << "End of dump from insertObj\n";

     if ((*beg) == NULL ) { // list is empty
        *beg=new_obj;
        return true;
     }

     while((*beg)->next != NULL) {
         *beg=(*beg)->next;
     }
     (*beg)->next=new_obj;
     return true;

}

// Create new_obj of the type struct student
// function returns pointer to the new object in case the object is created successfully
struct student * createObj( int given_roll_no) {

struct student *temp;

      temp = (struct student *) malloc(sizeof(struct student));

      if (temp){
        temp->roll_number = given_roll_no;
        temp->next = NULL ;
      }
      cout << "Beginning of dump from createObj\n";
      cout << temp->roll_number;
      cout << temp;
      cout << "End of dump from createObj\n";
      return temp;

}

// Display the linked list
void displayList( struct student *beg) {

  if (beg==NULL) {
    cout << "List is empty \n";
    return;
  }

  while(beg) {
    cout << "Student roll number = " << beg->roll_number;
    beg=beg->next;
  }

}

int main(int argc, char * argv[]) {


int user_input, roll_no;
struct student *obj_ptr = NULL; 
struct student * head = NULL;
    
   // Seek end user input on operations to be performed

   while (true) {
        cout << "Enter your choice (1- insert into list, 2- display list, 9 to quit ::";
        cin >> user_input;
        if ( user_input == QUIT )
	 break;
	else { // presuming right input either 1 or 2

	   if (user_input == INSERT ) {
                 cout << "Provide student roll number ";
		 cin >> roll_no;
		 if( obj_ptr = createObj(roll_no))
		   if(insertObj(&head,obj_ptr))
		     cout << "Object added succssfully"; 
		   else
		     cout << "Object insertion failed"; 
	   }
	   else {
	         displayList(head);
	   }

	}
   }
}
