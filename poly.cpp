#include <iostream>
using namespace std;

class Animal{
	public:
		virtual void makesound(){
			cout<<"Animal makes a sound"<<endl;
		} 
};
class Dog : public Animal{
	public:
		void makesound(){
			cout<<"Dog makes a sound"<<endl;
		}
};
class Cat : public Animal{
	public:
		void makesound(){
			cout<<"Cat makes a sound"<<endl;
		}
};
int main(){
	Animal *animalptr;
	Dog dog;
	Cat cat;
	
	animalptr = &dog;
	animalptr->makesound();
	animalptr = &cat;
	animalptr->makesound();
	return 0;
}


