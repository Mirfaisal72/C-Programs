#include <iostream>
#include <string>
using namespace std;

string add(string str1,string str2){
	return str1 + str2;
}

int add(int num1 , int num2)
{
	return num1 + num2;
}
int main(){
int num1 = 10;
int num2 = 5;
string str1 = "Hello ";
string str2 = "World";
cout<<add(str1,str2)<<endl;
cout<<add(num1,num2)<<endl;	
	return 0;
	
}
