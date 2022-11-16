#include<iostream>
using namespace std;

class B;
class A
{
	int a1 = 9;
public:
	friend int add(A, B);
};

class B
{
	int b1 = 10;
public:
   friend int add(A, B);
};

int add(A a, B b)
{
	return a.a1 + b.b1;
}

int main()
{
	A object1;    
	B object2;   
	cout << add(object1, object2);
	return 0;
}
