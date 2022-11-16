#include<iostream>
using namespace std;
class  Supermarket{
	public:
		int item_number;
		char item_name[100];
		int quantity;
		int tax;
		int discount;	
		
	void setter()
	{
	
	
		cout<<"Enter Item number :- ";
		cin>>item_number;
		cout<<"Enter Item name :- ";
		cin>>item_name;
		cout<<"Enter Quantity :- ";
		cin>>quantity;
		cout<<"Enter Tax :- ";
		cin>>tax;
		cout<<"Enter Discount :- ";
		cin>>discount;
		cout<<endl;
   
   }
};

void searchdata( Supermarket train[] , int a)
{
	int i;
	for(i=0; i<=2;i++)
	{
		if(a == train[i].item_number)
		{
			cout<<"Item number :- ";
			cout<<train[i].item_number<<endl;
			cout<<"Item name :- ";
			cout<<train[i].item_name<<endl;
			cout<<"quantity :- ";
			cout<<train[i].quantity<<endl;
			cout<<"Tax :- ";
			cout<<train[i].tax<<endl;
			cout<<"Discount :- ";
			cout<<train[i].discount<<endl;

		}
	}
}

main()
{
	int id;
	char password[100];
	cout<<"Enter Your Id :- ";
	cin>>id;
	cout<<"Enter Password :- ";
	cin>>password;
	
		
	if(id == 99){
		cout<<"Id And Password Verifide Successfully....."<<endl<<endl;
	}
	else
	{
		cout<<"Enter Valid Id Password"<<endl;
	} 
    Supermarket supermarket[3];
	
	int i;
	for(i=0; i<=2 ;i++)
	{
		supermarket[i].setter();
	}
	int search;
	cout<<endl<<"ENTER ITEM NUMBER  :- ";
	cin>>search;
	searchdata(supermarket,search);
}

