//*******************************************************************************
// Course Number and Section:
// Course Semester:
// Your Name:
// --Only if he helped you with the assignment--
// Teammate Name:
// ---------------------------------------------
// Program Description:
//
//
//
//*******************************************************************************

//	01) Include your libraries here. Explain the libraries being used with comments.


//	DO NOT MODIFY THE LINE BELOW
#include <limits>

using namespace std;

//	02)	Below this comment, declare a global named constant variable(s) named "PI" with the
//		value: 3.141592


//	03)	Below this comment, create value-return function prototype areaRectangle().
//		Parameter(s): None


//	04)	Below this comment, create value-return function prototype areaEllipse().
//		Parameter(s): None


//	05)	Below this comment, create void function prototype getData().
//		Parameter(s): baseA/radiusA, heightA,radiusB


//	06)	Below this comment, create void function prototype printData().
//		Parameter(s): area of rectangle, area of ellipse, output file stream


int main()
{
	//	07)	Declare variable(s) named "recAreaA" and "elliAreaA" that hold(s)
	//		double-precision real number(s).


	//	08) Below this comment, declare output file stream variable(s) named "outFileA".


	//	09) Below this comment, associate the outfile file stream variable(s) with the name 
	//		of the file(s) to be used appropiately.


	//	07) Below this comment, check if the output file was properly associated
	//		and opened. Look at Chapter 03 for file manipulation.
	//		Requirement(s) and algorithm
	//			If the file was not opened, then
	//				01)	Display on the screen:
	//						Error opening the file...
	//
	//						Press any key to continue...
	//					Note:	Pay attention to the new lines above the message
	//				02)	Close the program with integer -1.
	
	

	//	10) Below this comment, call the value-returning areaRectangle() function.
	//		Parameter(s): None


	//	11) Below this comment, display a new line.


	//	11) Below this comment, call the value-returning areaEllipse() function.
	//		Parameter(s): None


	//	12) Below this comment, call the void printData() function.
	//		Parameter(s): area of rectangle, area of ellipse, output file stream


	//	13)	Below this comment, display on the screen:
	//
	//
	//			Press any ENTER to continue...
	//		Note:	Pay attention to the new lines above the message.


	//	14)	Below this comment, close the output stream variable.


	//	DO NOT MODIFY THE LINE BELOW
	cin.get();
	//	DO NOT MODIFY THE LINE BELOW
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//	15) Below this comment, terminate your program with integer 0.

}

//	16)	Below this comment, create value-return function definition for areaRectangle().
//		Requirements and algorithm for the function
//			01)	Declare variable(s) named "baseA" and "heightA" that hold(s)
//				double-precision real number(s).
//			02)	Display on the screen:
//					For the Rectangle
//			03)	Call the getData() function and pass(s) the corresponding variables.
//					Parameter(s): baseA/radiusA, heightA,radiusB
//			04)	Calculate the area of a rectangle and assign it to corresponding variable.
//					Formula: base * height
//					Note:	Be careful for mixed datatypes.
//			05)	Return the area of the rectangle.
//		Parameter(s): None


//	17)	Below this comment, create value-return function definition for areaEllipse().
//		Requirements and algorithm for the function
//			01)	Declare variable(s) named "radiusA" and "radiusB" that hold(s)
//				double-precision real number(s).
//			02)	Display on the screen:
//					For the Ellipse
//			03)	Call the getData() function and pass(s) the corresponding variables.
//					Parameter(s): baseA/radiusA, heightA,radiusB
//			04)	Calculate the area of a ellipse and assign it to corresponding variable.
//					Formula: PI * radiusA * radiusB
//					Note:	Be careful for mixed datatypes.
//			05)	Return the area of the ellipse.
//		Parameter(s): None


//	18)	Below this comment, create void function definition for getData().
//		Requirements and algorithm for the function
//			01)	Prompt on the screen:
//					Please enter two (2) dimensions (Add a space between each):
//			02)	Get the two (2) value(s) from the keyboard and store in appropiate
//				variable(s).
//		Parameter(s): baseA/radiusA, heightA,radiusB


//	19)	Below this comment, create void function definition for printData().
//		Requirements and algorithm for the function
//			01)	Format output in fixed decimal notation displaying one digit(s) after the
//				decimal point.
//			02)	Display on a file:
//					The area of the rectangle is [area of rectangle]
//
//					The area of the ellipse is [area of ellipse]
//		Parameter(s): area of rectangle, area of ellipse, output file stream
