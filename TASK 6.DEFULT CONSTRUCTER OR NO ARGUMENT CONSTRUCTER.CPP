#include <iostream>
using namespace std;
 

class student{

    
    private:
        int X;
        int Y;
 
    
    public:
        
            student (); 
        
        void    setdata(); 
        
        void    getdata();
     
};
 

student:: student()
{
    X = 0;
    Y = 0;
}
 
void student:: setdata()
{
    cout << "Enter the student marks :"<<endl;
    cout << "Enter the marks  of X: "; cin >> X;
    cout << "Enter the marks  of Y: "; cin >> Y;
}
 
void student:: getdata()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}
 
int main()
{
    student s; 
    cout << endl <<"student  mark: " << endl;  
    cout << "marks  after student initialization : " <<endl;
    s.getdata();  
    
    s.setdata();
    cout << "marks after student Input : ";
    s.getdata();
    
    return 0;
}
