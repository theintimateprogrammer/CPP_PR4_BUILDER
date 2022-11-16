#include<iostream>
using namespace std;
class customers {  

     private:
      	int hotel_id;
      	string hotel_name;
      	string hotel_type;
      	int hotel_rating;
      	string hotel_location;
      	int hotel_established_year;
      	int hotel_staff_quantity;
      	int hotel_room_quantity;
      	string hotel_website;

    public:
        void setdata(int hotel_id, string hotel_name,string hotel_type, int hotel_rating,string hotel_location,int hotel_established_year,int hotel_staff_quantity,int hotel_room_quantity,string hotel_website){
            this->hotel_id =hotel_id;
            this->hotel_name =hotel_name;
            this->hotel_type =hotel_type;
            this->hotel_rating =hotel_rating;
            this->hotel_location =hotel_location;
            this->hotel_established_year =hotel_established_year;
            this->hotel_staff_quantity =hotel_staff_quantity;
            this->hotel_room_quantity =hotel_room_quantity;
            this->hotel_website =hotel_website;
        }
        
        void getdata(){
	        cout<<hotel_id<<endl;
        	cout<<hotel_name<<endl;
	        cout<<hotel_type<<endl;
	        cout<<hotel_rating<<endl;
	        cout<<hotel_location<<endl;
	        cout<<hotel_established_year<<endl;
	        cout<<hotel_staff_quantity<<endl;
	        cout<<hotel_room_quantity<<endl;
	        cout<<hotel_website<<endl;
        }
};


int main(){
	customers obj;
	obj.setdata(1234,"taj","hotel fivestar",2345,"adajan",2006,560,70,"www.taj.com");
	obj.getdata();
    return 0;
}
	
