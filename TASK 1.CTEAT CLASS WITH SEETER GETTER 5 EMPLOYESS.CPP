#include<iostream>
using namespace std;

class employee{
     	private:
		int id;
		char name[10];
		char role[20];
		int salary;
		int experiance;
		char address[20];
		char email[30];
		int contact;
		
		
			
		public:
		void setter (){
		cout<<"enter the employee details :"<<endl;
		cout<<"enter the id :";
		cin>>id;
	    cout<<"enter the name :";
		cin>>name;	
		cout<<"enter the role:";
		cin>>role;		
		cout<<"enter the salary :";
		cin>>salary;
		cout<<"enter the experiance:";
		cin>>experiance;
		cout<<"enter the address :";
		cin>>address;
		cout<<"enter the email:";
		cin>>email;
		cout<<"enter the contact:";
		cin>>contact;
	}
	    void getter(){
	        cout<<"\nyour value are hear ::";
	    	cout<<"\n id:"<<id;
	    	cout<<"\n name:"<<name;
	    	cout<<"\n role:"<<role;
	    	cout<<"\n salary:"<<salary;
	    	cout<<"\n experiance:"<<experiance;
	    	cout<<"\n address:"<<address;
	    	cout<<"\n email:"<<email;
	    	cout<<"\n contact:"<<contact<<endl;
	    	
	    	
	    	}
};
 int main(){
			employee obj1,obj2,obj3,obj4,obj5;
			obj1.setter();
			obj1.getter();
			obj2.setter();
			obj2.getter();
			obj3.setter();
			obj3.getter();
			obj4.setter();
			obj4.getter();
			obj5.setter();
			obj5.getter();
		}	
		
		
