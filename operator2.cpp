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
		Distance operator +(Distance);
};
Distance Distance :: operator + (Distance d2){
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	
	if(i>=12.0){
		i -= 12.0;
		f++;
	}
	return Distance(f,i);
}
int main(){
	Distance d1 , d3;
	d1.get_dist();
	Distance d2(10,11.3);
	
	d3 = d1 + d2;
	cout << "dist1 = "; d1.show_dist(); cout << endl;
	cout << "dist2 = "; d2.show_dist(); cout << endl;
	cout << "dist3 = "; d3.show_dist(); cout << endl;
	
	return 0;
}








