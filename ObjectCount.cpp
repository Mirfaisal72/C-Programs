#include <iostream>
using namespace std;

class Object {
private:
    static int objectCount; // Static variable to record count of objects created
    int serialNumber;

public:
    Object() {
        serialNumber = ++objectCount; // Assign serial number based on count of objects created
    }

    int getSerialNumber() const {
        return serialNumber;
    }
};

int Object::objectCount = 0; // Initialize static variable objectCount

int main() {
    Object obj1, obj2, obj3; // Create three objects of class Object

    cout << "Object 1 has serial number: " << obj1.getSerialNumber() << endl;
    cout << "Object 2 has serial number: " << obj2.getSerialNumber() << endl;
    cout << "Object 3 has serial number: " << obj3.getSerialNumber() << endl;

    return 0;
}

