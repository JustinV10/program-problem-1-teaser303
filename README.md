# Display_Text
Program Problem 1


## Program Problem 1: Display Text

Create a New Project to display your Full Name, your period stored as a variable, and 
“Hello World”, without the quotations. You will make sure that it prints to the console 
in a readable format, and pauses before the console exits so the user can actually read 
what is displayed. 

Below is a template to start your program:

/*

Your Name - Date Period 

Assignment Name : *

Brief Description of the Assignment

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
	
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std; //*

// Functions() 

void pause() {

	cout << "Press any key to continue . . .";
	
	while (!_kbhit());
	
	_getch();
	
	cout << '\n';	
	
}

// MAIN

void main() { 

	// Define and Assign your variable(s)
	
	// Display Text
	
	pause(); // pauses to see the displayed text
	
} 

How to Start a New Project : 
//If you are using 2015 Visual Studios
Open Visual Studios 2015 (Not Blend)                                                                                                               Click File and Navigate to New > Project,  select that or Press Ctrl+Shift+N
Navigate through Templates to Visual C++, choose General from the drop downs
or until you can see “Empty Project” from that selection.
Change the Name to the Project Name.  Make sure the location is not saving 
to your H Drive. 
Once you finish the setup, right click in the Solution Explorer’s file 
Source File. ** If no Solution Explorer exists, click on View in the ToolBar 
and select Solution Explorer you can also press Ctrl+Alt+L.
After right clicking in the Solution Explorer, on the Source Files Folder, 
select Add >New Item or press Ctrl+Shift+A and select the 
C++ File (*.cpp) and follow the specified Naming Convention. 
FName_LName_AssignmentName.cpp Remember while coding to save often 
Ctrl+S saves the single file your working on, Ctrl+Shift+S saves all 
files in the open project. Remember that when you Debug or Compile 
sometimes you are unable to go back and undo previous edits. Make sure 
you keep up with your changes. 

//good one teaser303
