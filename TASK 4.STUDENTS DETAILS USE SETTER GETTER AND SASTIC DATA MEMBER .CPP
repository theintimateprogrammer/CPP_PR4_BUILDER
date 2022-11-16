#include <iostream>
using namespace std;

class student
{
	private:
		int id;
		char name[30];
		int  age;
		int  total;
		char course[100];
		char email[50];
		char city[70];
		char clg[60];
	public:
	
		void getDetails();
		
		void putDetails();
};

void student::getDetails(){
	
	for(int i = 0; i <=4 ; ++i){
	
	cout<<"Enter Id : ";
	cin >> id ;
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter Age: ";
	cin >> age;
	cout<<"Enter Course Name : ";
	cin>>course;
	cout<<"Enter Email : ";
	cin>>email;
	cout<<"Enter City : ";
	cin>>city;
	cout<<"Enter Collage : ";
	cin>>clg;
	cout<<endl;
}
    
}

void student::putDetails(void){
	
	for(int i = 0; i <=4 ; ++i){
	cout<<endl<<endl << "Student details:\n";
	cout<<"Id : "<<id<<endl;
	cout << "Name:"<< name <<endl;
	cout<< "Age :"<<age<<endl;
	cout<<"Course : "<<course<<endl;
	cout<<"Email : "<<email<<endl;
	cout<<"City : "<<city<<endl;
	cout<<"Collage : "<<clg<<endl;
}
}

 main()
{
	student std;	
	std.getDetails();
	std.putDetails();
	
	return 0;
}
