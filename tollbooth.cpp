#include <iostream>
using namespace std;
class tollbooth{
	private:
		int totalcars;
		double totalcash;
	public:
		tollbooth():totalcars(0),totalcash(0){
		}
	    void payingcars(){
	    	totalcars++;
	    	totalcash += 0.50;
		}
		void nonpayingcars(){
			totalcars++;
		}
		void display() {
        cout << "Total cars: " << totalcars << endl;
        cout << "Total cash: $" << totalcash << endl;
    }	
};
int main(){
	tollbooth booth;
	char key;
	cout << "Press 'p' to count a paying car, 'n' to count a nonpaying car, or 'E' to exit." << endl;
	
	do{
		cin>>key;
		switch(key){
			case 'p':
                booth.payingcars();
                cout << "Paying car counted." << endl;
                break;
            case 'n':
                booth.nonpayingcars();
                cout << "Nonpaying car counted." << endl;
                break;
            case 'e': // ASCII code for Esc key
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid input. Please press 'p', 'n', or 'E'." << endl;
		}
	}while(key!='e');
	booth.display();

    return 0;	
}
