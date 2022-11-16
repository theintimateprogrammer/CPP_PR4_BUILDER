#include<iostream>
using namespace std;

class Train {
    public:
    
    int train_no;
    int train_time;
    char train_name[100];
    char train_source[100];
    char train_destination[100];
    
    void setdata(){
        
        cout<<"ENETR THE No :-";
        cin>>train_no;
        cout<<"ENETR THE TIME :-";
        cin>>train_time;
        cout<<"ENETR THE NAME :-";
        cin>>train_name;
        cout<<"ENETR THE SOURCE :-";
        cin>>train_source;
        cout<<"ENETR THE DESTINATION :-";
        cin>>train_destination;
        
        
    }
};

void searchdata(Train train[],int a){
    int i=0;
    for(i=0;i<=2;i++){
        
        if(a==train[i].train_no){
    
    cout<<"TRAIN NUMBER "<<train[i].train_no<<endl;
    cout<<"TRAIN Name"<<train[i].train_name<<endl;
}
        
}
    
}

main(){
    Train train[3];
    int i=0;
    for(i=0;i<=2;i++){
        
        train[i].setdata();
        
        
    }

int search;
cout<<"ENTER TRAIN NUMBER :- ";
cin>>search;

searchdata(train,search);
}
