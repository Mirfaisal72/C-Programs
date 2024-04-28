#include <iostream>
using namespace std;

class Distance{
	private:
		int feet;
		float inches;
	public: 
		Distance() : feet(0),inches(0.0){	
		}
		Distance(int ft,float inc) : feet(ft),inches(inc){	
		}
		void get_dist(){
			cout<<"Enter the Feet: "<<endl;
			cin>>feet;
			cout<<"Enter the Inches: "<<endl;
			cin>>inches;
		}
		void show_dist(){
			cout<<feet<<" ft "<<inches<<" in"<<endl;
		}
		bool operator <(Distance);
};
bool Distance :: operator < (Distance d2){
	float f1 = feet + inches/12; // for distance 1 
	 float f2 =  d2.feet + d2.inches/12; //for distance 2
	
	return (f1<f2);
}
int main(){
	Distance d1;
	d1.get_dist();
	Distance d2(10,11.3);
	
	cout << "dist1 = "; d1.show_dist(); cout << endl;
	cout << "dist2 = "; d2.show_dist(); cout << endl;
	
	if(d1<d2){
		cout<<"Distance 1 is less than Distance 2"<<endl;
	}
	else
		cout<<"Distance 1 is Greater than Distance 1"<<endl;
	return 0;
}








