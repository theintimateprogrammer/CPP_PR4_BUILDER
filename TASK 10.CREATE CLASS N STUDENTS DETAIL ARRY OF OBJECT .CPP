#include<iostream>
using namespace std;

class students{
     	
		int stu_id;
		char stu_name[10];
		int stu_age;
		char stu_course[10];
		char stu_email[15];
		char stu_city[40];
		char stu_collage[30];
		public:
		void setdata();
		void getdata();
};

		void students ::setdata  (){
	
		cout<<"enter the stu_id :";
		cin>>stu_id;
	    cout<<"enter the stu_name :";
		cin>>stu_name;	
		cout<<"enter the stu_age :";
		cin>>stu_age;		
		cout<<"enter the stu_course :";
		cin>>stu_course;
		cout<<"enter the stu_email :";
		cin>>stu_email;
		cout<<"enter the stu_city :";
		cin>>stu_city;
		cout<<"enter the stu_collage:";
		cin>>stu_collage;
	}
	    void students ::getdata(){
	         
	        cout<<"\nyour student infpormation are hear ::";
	    	cout<<"\n stu_id:"<<stu_id;
	    	cout<<"\n stu_name:"<<stu_name;
	    	cout<<"\n stu_age:"<<stu_age;
	    	cout<<"\n stu_course:"<<stu_course;
	    	cout<<"\n stu_email:"<<stu_email;
	    	cout<<"\n stu_city:"<<stu_city;
	    	cout<<"\n stu_collage:"<<stu_collage<<endl;
	    	
	    	
	    	}

int main(){
    
    //maximun limit of 20 students 
    int i,n;
   
	cout<<"enter the number of students :";
	cin>>n;
	
	students obj[n];

	
	for (i=0;i<n;i++){
	    obj[i].setdata();
	}
		
		
	for (i=0;i<n;i++){
	    obj[i].getdata();
	}
}
