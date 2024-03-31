#include <iostream>
using namespace std;
class Distance{
	private:
		int feet;
		int inches;
	public:
		Distance():feet(0),inches(0){
		}
		Distance(int ft,int inc):feet(ft),inches(inc){
		}
	void get_dist(){
		cout<<"Enter the Feet: ";
		cin>>feet;
		cout<<"Enter the Inches: ";
		cin>>inches;
	}
	void showdist(){
		cout<<feet<<"_"<<inches<<endl;
	}
	Distance add_dist(Distance);
};

Distance Distance :: add_dist(Distance d2){
	Distance temp; //This is the object which will be returned by a function
	temp.inches = inches + d2.inches;
	if(temp.inches >= 12){
		temp.inches -= 12;
		temp.feet++;
	}
	temp.feet += feet + d2.feet;
	return temp;
}

int main(){
	Distance d1 , d2(11,23);
	Distance d3;
	
	
	d1.get_dist();

	cout<<"Distance 2: "<<endl;
	d2.showdist();
	
	d3 = d1.add_dist(d2);
	
	d3.showdist();
	return 0;
	
}
