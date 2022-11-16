#include<iostream>
using namespace std;
 
class data{
   public:
        data(){
             cout<<"\n Constructor executed";
       }   
 
       ~data(){
             cout<<"\n Destructor executed";
          }
};
main(){
     data d;
       
    return 0;
}
