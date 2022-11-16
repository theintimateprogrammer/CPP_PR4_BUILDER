
#include<iostream>

using namespace std;
class employes {
int j, k;
public:
employes (int m, int n) {
j = m;
k = n;
cout << "In this parameterised  Constructor\n";
}

void getdata() {
cout << "Values of Constructor:" << j <<endl;
cout << "Values of Constructor:" << k <<endl;
}
};
int main () {
employes e1 (30, 40);
e1.getdata();

return 0;
}
