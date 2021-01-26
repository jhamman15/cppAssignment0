/*
Joseph Oudemolen
1/19/2021
CIS 227.6800
*/
#include <iostream>
#include "Assignment1.h"

using namespace std;
Assignment1Class Assignment1;

int main(){
    int userSelection = 5;

    //runs while user selection is not 9
    do{
        double side1,side2,length,width,height; //variables for all of the math problems

        //main menu
        cout << "Select a problem" << endl;
        cout << "1: Find hypotenuse of a triangle" << endl;
        cout << "2: Find area of a Trapezoid" << endl;
        cout << "3: Find the volume of a rectangle" << endl;
        cout << "9: Exit" << endl;
        cout << "Please make a selection: ";
        cin >> userSelection;

        //user input for hypotenuse of triangle
        if(userSelection == 1){
            cout << "Please input first side of triangle: ";
            cin >> side1;
            cout << "Please input second side of triangle: ";
            cin >> side2;
            double triangleOutput =  Assignment1.hypotenuseOfTriangle(side1, side2);
            cout << "The Hypotenuse of the triangle is " << triangleOutput << endl;
        }

        //user input for area of trapezoid
        else if(userSelection == 2){
            cout << "Please input first side of trapezoid: ";
            cin >> side1;
            cout << "Please input second side of trapezoid: ";
            cin >> side2;
            cout << "Please input the height of the trapezoid: ";
            cin >> height;
            double trapezoidOutput =  Assignment1.areaOfTrapezoid(side1, side2, height);
            cout << "The Area of the trapezoid is " << trapezoidOutput << endl;
        }

        //user input for volume of recangle 
        else if(userSelection == 3){
            cout << "Please input the length of the rectangle: ";
            cin >> length;
            cout << "Please input the width of the rectangle: ";
            cin >> width;
            cout << "Please input the height of the rectangle: ";
            cin >> height;
            double rectangleOutput =  Assignment1.volumeOfRectangle(length, width, height);
            cout << "The volume of the rectangle is " << rectangleOutput << endl;
        }

        // closes the application
        else if(userSelection == 9){
            cout << "Thank you and goodbye" << endl;
        }

        //if input is invalid
        else{
            cout << "INVALID ENTRY" << endl;
        }
    
    }while (userSelection != 9);  //end of do while loop
}
