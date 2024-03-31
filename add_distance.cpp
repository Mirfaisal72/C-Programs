#include <iostream>
using namespace std;

class Distance{
	private:
    	int feet;
    	int inches;

	public:
    	Distance() : feet(0), inches(0) {
        // Constructor for objects with no arguments, values are initialized to zero.
    	}

    	Distance(int ft, int in) : feet(ft), inches(in) {
        // Constructor for objects with arguments, values are initialized.
    	}

    	void get_distance() {
        	cout << "Enter Feet: ";
        	cin >> feet;
        	cout << "Enter Inches: ";
        	cin >> inches;
    	}

    	void show_distance() {
        	cout << feet << " Feet"<<"_" << inches<<" Inches"<< endl;
    	}
    	void add_distance(Distance,Distance);//Declaring the function
};

void Distance :: add_distance(Distance d1,Distance d2){ //Function Definition
	inches = d1.inches + d2.inches;
	feet = 0; //used for carry
	if(inches > 12){
		inches = inches - 12;
		feet++;
	}
	feet = feet + d1.feet + d2.feet;
}

int main() {
    Distance d1,d3;
    Distance d2(23, 34);

    d1.get_distance();

    cout << "Distance 1: ";
    d1.show_distance();
    cout << "Distance 2: ";
    d2.show_distance();
    
    d3.add_distance(d1,d2);
    
    
    cout << "Distance 3: ";
    d3.show_distance();

    return 0; 
}

