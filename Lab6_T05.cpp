//*******************************************************************************
// Course Number and Section: CSCI 1380 - 04
// Course Semester: Fall 2022
// Your Name:Luis Trevino
// --Only if he helped you with the assignment--
// Teammate Name:
// ---------------------------------------------
// Program Description:
// 
//  Get inputs from the user when prompted adn used that values to calculate the area of a rectangle and a ellipse
//  the code goes from a series of fuction  to get teh value
// 
//*******************************************************************************

//library
//libryary for inputs and outputs
#include <iostream>
//library for inputs or aoutputs to files
#include <fstream>
//library for inputs manipulation
#include <iomanip>
//	DO NOT MODIFY THE LINE BELOW
#include <limits>
using namespace std;

// double constant bariable named "PI" that is equal to 3.141592
const double PI = 3.141592;
//function prototype for area rectangle
double areaRectangle();
//function prototype for the area of ellipse
double areaEllipse();
////function prototype for the inputs
void getData(double&, double&);
////function prototype for the data printied in the files
void printData(double, double, ofstream&);


int main()
{
    // variables or the area of the ellipse and rectangle that holds double-precision
    double recAreaA, elliAreaA;
    //variable to write in the fole
    ofstream outFileA;

    //create the file "resultsA.txt"
    outFileA.open("resultsA.txt");
    //if the file is not find
    if (!outFileA) {
        //print out a error code
        cout << "Error Opnening The File" << endl;
        //terminate the program and return -1
        return-1;
    }
    // set the area rectangle variable to the value return from the fuction
    recAreaA = areaRectangle();
    //pritn a new line
    cout << endl;
    //set the area of the ellipse fuction to the correspondingvariable
    elliAreaA = areaEllipse();

    //give the area of the ellipse and the rectangle to the print fuction to write the data in the file
    printData(recAreaA, elliAreaA, outFileA);
    //print "Press any ENTER to continue..." 
    cout <<endl << endl << "Press any ENTER to continue..." << endl;
     //close the file
    outFileA.close();

    //	DO NOT MODIFY THE LINE BELOW
    cin.get();
    //	DO NOT MODIFY THE LINE BELOW
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //terminate the program
    return 0;

}

//Create the fuction devinition for AreaRectangle
double areaRectangle() {
    //create variables for the sides of the rectangle(baseA and baseB)
    double baseA , hightA;
    //print "For the rectangle " 
    cout << "For the rectangle " << endl;
    //got o the fuction data
    getData(baseA, hightA);
    //retrn the multiplication of baseA and baseB
    return baseA * hightA;
}
////Create the fuction devinition for areaEllipse
double areaEllipse() {
    //create variables for the sides of the ellipse(radiusA and radiusB)
    double radiusA, radiusB;
    //print "For the Ellipse:
    cout << "For the Ellipse: " << endl;
    //fot to the fuction getData
    getData(radiusA, radiusB);
    //return the value from the multiplication from the radius A and B and the varable PI
    return PI * radiusA * radiusB;
}
////Create the fuction devinition for getData
void getData(double &valueA, double &valueB) {
    //print "Please enter two (2) dimensions (Add a space between each): "
    cout << "Please enter two (2) dimensions (Add a space between each): ";
    //get the input from the user and stored it in a variable
    cin >> valueA;
    //get a second input from the user and stored it in a diffrent variable
    cin >> valueB;
}
////Create the fuction devinition for printData
void printData(double areaRectangle, double areaEllipse, ofstream& outFileA) {
    //keep the result in decimal form, and only use one number after the decimal point
    outFileA << fixed << setprecision(1);
    //print The area of the rectangle is [areaRectangle]
    outFileA << "The area of the rectangle is " << areaRectangle << endl;
    //print The area of the ellipse is [areaEllipse]
    outFileA << "The area of the ellipse is " << areaEllipse << endl;
}