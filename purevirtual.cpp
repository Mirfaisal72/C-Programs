#include <iostream>
using namespace std;
class character{
	public:
		virtual void attack()=0;//this cannot be instantiated
		void move(){
			cout<<"Character moves"<<endl;
		}
};
class warrior : public character{
	public:
		void attack(){
			cout<<"warrior attacks with a sword";
		}
};
class Archerer : public character{
	public:
		void attack(){
			cout<<"Archerer throws arrows";
		}
};
class Witch : public character{
	public:
		void attack(){
			cout<<"Witch casts a spell";
		}
};
int main(){
	Witch w1;
	w1.attack();
	return -1;
}

