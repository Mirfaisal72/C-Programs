#include <iostream>
using namespace std;

class Angle{
	private:
		int angle;
		float minutes;
		char direction;
	public:
		Angle(int a,float m, char d):angle(a),minutes(m),direction(d){
		}
		void getAngle(){
			cout<<"Enter the Angle degrees: ";
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
int main(){
	Angle firstAngle(10,43.5,'N');
	cout<<"Initial Angle: "<<endl;
	firstAngle.displayAngle();
	char choice;
	do{
		Angle userAngle(0,0.0,'N');
		userAngle.getAngle();
		cout<<"User Angle: "<<endl;
		userAngle.displayAngle();
		cout<<"enter Y if you want to go again or N to ESC: "<<endl;
		cin>>choice;
	}while(choice!='N');
	return 0;
}
