#include <iostream>
using namespace std;
class Distance{
	private:
		int feet;
		int inches;
	public:
		Distance(int ft, int inc):feet(ft),inches(inc){
		}
		Distance(float meters){ //for converting basic type to user defined
			float frfeet = meters * 3.28;
			feet = int(frfeet);
			inches = 12*(frfeet-feet);
		}
		void showdist(){
			cout<<feet<<"\nft"<<"_"<<inches<<"inc"<<endl;		
		}
		operator float(){ // for converting user defined to basic datatype
			float frfeet = inches / 12;
			frfeet += float(feet);
			return frfeet/3.28;
		}
};
int main(){
	Distance d1(452,7);
	Distance d2(206);
	
	float mtrs = static_cast<float>(d1);
	cout<<mtrs;
	d1.showdist();
	d2.showdist();
	return -1;
}
