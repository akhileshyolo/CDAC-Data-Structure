#include<iostream>
using namespace std;

typedef struct point point;
/* Declare the struct with integer members x, y */
struct point {
   int    x;
   int    y;
};


//to access directly
typedef struct pk pappu;
struct pk{
	point p;
	pk *next;
};

typedef struct {
   int    account_number;
   char   *first_name;
   char   *last_name;
   float  balance;
} account;


typedef struct State{
  int roll;	
} *temp;


int main(){
	
	//because we used typedef
	point p = {1 ,2};
	cout<<p.x<<endl;	

	point k = {.x=10, .y = 20};
	cout<<k.x<<endl;
	
	point z;
	z = k;
	cout<<z.x<<endl;

	point y;
	y = (point){4,7};
	cout<<y.x<<endl;

	struct point abc = {3,9};
	cout<<abc.x<<endl;
		
	cout<<"\nUsing Pointers:\n";
	
	struct point *pabc = &abc;
	cout<<(*pabc).x<<endl;
	cout<<pabc->x<<endl;

	cout<<"\nUsing Pointer of type same struct";
	pappu el = {.p = {.x=3, .y=7} };
	
	//invalid
	//pappu le = {p={.x=4, .y=6}, next=&el};

	//valid
	//pappu le = {p={.x=4, .y=6}, .next=&el};
	
	pappu le = {.p = {.x = 4, .y = 6}, .next = &el };

	
	account akhilesh;
	akhilesh.account_number = 125543;
	cout<<endl;
	cout<<akhilesh.account_number<<endl;

	//temp tipu = {.roll:4656};
	
	//cout<<tipu.roll; errorrrrrrrrrrrr
	
	//errorr
	//temp tipu;
	//tipu.roll=345;
		
	//valid
	temp tipu = new State();
	tipu->roll=345;
	cout<<tipu->roll;


	return 0;
}
