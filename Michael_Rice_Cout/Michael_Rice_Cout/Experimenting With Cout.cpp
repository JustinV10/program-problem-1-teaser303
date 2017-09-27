/*
Michael Rice
Display Text Project
Intro to C++ Visual Studio and the Cout Command
Displaying Text From the Console to Code
*/

//Libraries
#include <iostream> //gives endl >> << cin cout boolalpha noboolalpha
#include <conio.h> //gives _kbhit(); and _getch();

//Namespaces
using namespace std; //avoids clashing with other variables

//Functions
void pause() { //substitutes pause() command
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	int period;
	period = 3;
	cout << "Michael Rice" << endl;
	cout << "Period: " << period << endl;
	cout << "Hello World!" << endl;
	pause();
}