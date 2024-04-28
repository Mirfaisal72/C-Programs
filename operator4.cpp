#include <iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
		float MTF;
	public:
		Distance():feet(0), inches(0){ // Constructor with no arguements
		}
		Distance(int ft , float inc):feet(ft),inches(inc),MTF(3.28){ //Constructor with 2 Arguements
		} 
		Distance(float meters):MTF(3.28){ //Contructor with 1 Arguement, it takes in value in meters and converts to Distance 
			float flfeet = meters * MTF;
			feet = int(flfeet);
			inches = 12 * (flfeet -feet);
		}
		void getdist() {
			cout << "Enter feet: "<<endl; 
			cin >> feet;
			cout << "Enter inches: "<<endl;
			cin >> inches;
		}
		void showdist(){ 
			cout << feet <<" ft "<< inches <<" inc"<<endl; 
		}
		operator float(){ //This will convert Distance to Meters
			float  flfeet = inches / 12; //convert the inches to float feet
			flfeet += static_cast<float>(feet);
			return flfeet/MTF;	
		}
};

int main(){
	float mtrs;
	Distance d1(2.35); //this takes 1 arguement that is in meters
	cout<<"Dist 1: "<<endl;
	d1.showdist();
	
	Distance d2(10,23.7);
	cout<<"Dist 2: "<<endl;
	d2.showdist();
	
	mtrs = static_cast<float>(d2);
	cout<<"Dist 2 in meters: ";
	cout<<mtrs<<endl;
	return 0;	
}


