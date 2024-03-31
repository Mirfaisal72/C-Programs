#include <iostream>
using namespace std;
class integer{
	private:
		int i;
	public:
		integer():i(0){
		} 
	void get(){
		cout<<"Enter the number"<<endl;
		cin>>i;
	}
	void show(){
		cout<<i;
	}
	integer add(integer);
};
integer integer :: add(integer i2){
	integer temp;
	temp.i = i+i2.i;
	return temp;
}
int main(){
	integer i1,i2,i3;
	i1.get();
	i2.get();
	
	i3 = i1.add(i2);
	
	cout<<"The sum is: ";
	i3.show();
	return 0;
}
