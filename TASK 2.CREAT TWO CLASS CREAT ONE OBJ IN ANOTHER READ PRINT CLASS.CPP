#include<iostream>
using namespace std;

class students
{
private:

  int id;
  char name[30];
  int rollnumber;
  int standard;

public:
  void readstudents()
  {
    cout << "enter the id :" << endl;
    cin >> id;
    cout << "enter the nmae :" << endl;
    cin >> name;
    cout << "enter the rollnumber :";
    cin >> rollnumber;
    cout << "enter the standard:";
    cin >> standard;
  }
  
  void printstudents()
  {
    cout << "id:" << id << endl;
    cout << "name:" << name << endl;
    cout << "rollnumber:" << rollnumber << endl;
    cout << "standard:" << standard << endl;


  }



};

class classdetails
{
  char schoolname[30];
  students std;			//object

public:
  void readclassdetails()
  {
    cout << "enter the schoolname:";
    cin >> schoolname;
    std.readstudents();
  }
  void printclassdetail()
  {
    cout << "schoolname" << schoolname << endl;
    std.printstudents();
  }
};

int main()
{
  classdetails cd;
  cd.readclassdetails();
  cd.printclassdetail();
  return 0;
}
