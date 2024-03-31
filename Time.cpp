#include <iostream>
using namespace std;
class Time{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		Time():hours(0),minutes(0),seconds(0){
		}
		Time(int h, int m, int s):hours(h),minutes(m),seconds(s){	
		}
		void displayTime() const{
			cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
		Time addTime (Time t1 , Time t2)const{
			Time t3;
			t3.seconds = t1.seconds + t2.seconds;
			t3.minutes = t1.minutes + t2.minutes +t3.seconds/60;
			t3.hours = t1.hours + t2.hours + t3.minutes/60;
			
			t3.minutes %= 60;
			t3.hours %= 60;
			
			return t3;
		}	
};
int main(){
		const Time t1(10,20,30);
		const Time t2(12,43,34);
		
		Time t3;
		t3 = t3.addTime(t1,t2);
		
		cout<<"Time 1"<<endl;
		t1.displayTime();
		cout<<"Time 2"<<endl;
		t2.displayTime();
		cout<<"Time 3"<<endl;
		t3.displayTime();
		return 0;
}

