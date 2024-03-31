#include <iostream>
using namespace std;

class Angle{
	private:
		int angle;
		float minutes;
		char direction;
	public:
		Angle():angle(0),minutes(0.0),direction('N'){
		}
		void getAngle(){
			cout<<"Enter the Angle in degrees: ";
			cin>>angle;
			cout<<"Enter the minutes: ";
			cin>>minutes;
			cout<<"Enter the direction N  S or E W: ";
			cin>>direction;
		}
		void displayAngle(){
			cout<<angle<<"\xF8"<<minutes<<"' "<<direction<<endl;
		}	
};
class Ship{
	private:
		static int shipcount;
		int serialnum;
		Angle latitute, longitude;
	public:
		Ship():serialnum(++shipcount){
		}
		void getposition(){
			cout<<"Serial Number: "<<serialnum<<endl; 
			cout<<"Enter the Latitute: "<<endl;
			latitute.getAngle();
			cout<<"Enter the Longitude: "<<endl;
			longitude.getAngle();
		}
		void displayposition(){
			cout<<"The Position of the Ship with Serial Number "<<serialnum<<" is:"<<endl;
			cout<<"latitute"<<endl;
			latitute.displayAngle();
			cout<<"Longitude:"<<endl;
			longitude.displayAngle();
		}	
};
int Ship :: shipcount = 0;
int main(){
	Ship ships[2];
	for(int i = 0; i<2;i++){
		ships[i].getposition();
	}
	for(int i = 0;i<2;i++){
		ships[i].displayposition();
	}
	return 0;
}
