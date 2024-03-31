#include <iostream>
using namespace std;
class smallobj{
	private:
		int somedata;
	public:
		void set_data(int d){
			somedata = d;
		}
		void show_data(){
			cout<<"Data is: "<<somedata<<endl;
		}
};

int main(){
	smallobj s1 , s2;
	s1.set_data(15);
	s2.set_data(32);
	
	
	s1.show_data();
	s2.show_data();
	return -1;
}
