#include <iostream>

using namespace std;

class person{
	private:
		
		int age;
		int id;
	    
	public:
		
		person(){
			
			age = 1;
			id = 6;
		}
		
		person( int a,int i){
			
			age = a;
			id= i;
		}
		
		
		
		void getdata(void){
			cout<<"person age  is "<<age<<" years old."<<endl;
			cout<<" person id is = "<<id<<endl;
		}
};


int main(){
	
	person p1;
		cout<<"object p1..."<<endl;
     	p1.getdata();
	person p2(21,1243);
	    cout<<"object p2..."<<endl;
	    p2.getdata();	
	
	
	
	
	

}
