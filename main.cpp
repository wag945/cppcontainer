#include <iostream>
#include "MyClass.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Hello World from container" << endl;
	MyClass myClass;
	myClass.setName("Test");
	cout << "Name: " << myClass.getName() << endl;
	return(0);
}
