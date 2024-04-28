# include <iostream>
using namespace std;

class Animal{
	public:
		void eat(){
			cout<<"Animal Eats"<<endl;
		}
};
class Carnivore : virtual public Animal{
	public:
		void hunt(){
			cout<<"Carnivore Hunts"<<endl; // this class also contains eat() func from Animal
		}
};
class Herbivore : virtual public Animal{
	public:
		void graze(){
			cout<<"Herbivore Grazes"<<endl; // this class also contains eat() func from Animal
		}
};
class Omnivore : public Carnivore , public Herbivore{
	public:
		void eateverything(){
			eat(); //if we dont use virtual this will show an error because the compiler will not know which eat to call thus ambiguity occurs
			hunt();
			graze();
		}
};
int main(){
	Omnivore omnivore;
	omnivore.eateverything();
	omnivore.graze();
	return 0;
	
}

