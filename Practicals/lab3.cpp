/* 
 * Find the no.of students who have passed or failed using MAP.
 * Roll no, score.
 * Passing criteria
 * Printing/Displaying Result
 *
 * -Written by Akhilesh
 *  https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
 *  https://bogotobogo.com
 **/

#include<iostream>
#include<sstream>
#include<map>
using namespace std;

string toString(int roll,float marks)
{
	ostringstream op;
	op<<"Roll Num:"<<roll<<" , Marks"<<marks;
	return op.str();
	//.str() method added to convert int float to string
}


int main(){

	int size=0,roll=0,marks=0;
	cout<<"Hi, Enter no.of students marks to input:";
	cin>>size;

	typedef map<int,float> student;
	student all;
	student pass;
	student fail;

	all.insert(make_pair(1,30));
	all.insert(pair<int, float>(2,70));
	all.insert(student::value_type(3,60));
	
	for(int i=3;i<=size; i++){	
		cout<<"Enter roll. no and student marks:";
		cin>>roll>>marks;
		all.insert(make_pair(roll,marks));
	}	

	student::iterator j;
	for(j = all.begin(); j!=all.end();j++){
		if(j->second>=40){
			pass.insert(make_pair(j->first,j->second));
		}else{
			fail.insert(make_pair(j->first, j->second));
		}	
	}
	
	student::iterator k;
	cout<<"\nPass are- Roll Num , Marks :"<<endl;
        for(k = pass.begin(); k!=pass.end();k++){
		cout<<toString(k->first,k->second)<<endl;
        }

	student::iterator l;
	cout<<"\nFailed are- Roll Num , Marks :"<<endl;
        for(l = fail.begin(); l!=fail.end();l++){
		cout<<toString(l->first, l->second)<<endl;
        }


	/*//Other way
	map<int, float> boy;
	//boy.insert(make_pair(1,50));
	boy.insert(pair<int,float>(6,200));

	//boy::iterator bt;
	map<int,float>::iterator bt;

	for(bt = boy.begin(); bt!=boy.end(); bt++){
		cout<<bt->first<<endl;
	}*/	



	return 0;
}
