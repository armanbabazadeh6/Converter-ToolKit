/*
 * Class: CMSC140 CRN 20367
 * Instructor: Prof. Tsai
 * Project 2
 * Description: Temperature Converter. This is a tool kit that allows to convert Celcius into Fahrenheit. And allows to convert Kilometer into miles. and last but not least allows to convert
 * Kilogram into pounds. This Temperature Toolkit is very useful and does all the calculations for you!.
 * Due Date: 10/10/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Arman Babazadeh
*/

#include <iostream>
#include <iomanip>
using namespace std;
#include <string>


int main() {            // You have to have a int main!

	 string countryName;
	 int menuSelect = 0;
	 int tempCel = 0;
	 int fahrenheit = 0;
	 double kilometer = 0.0;
	 double mile = 0.0;
	 const double MILE_CALC = 0.62137;
	 const double FAHRENHEIT_DIVISION = 1.8;                // These variables allow the program to get input and output. And as well I have some constants for the math section of the code.
	 const double FAHRENHEIT_DIVISION_PART_2 = 32;
	 double pound = 0;
	 double kilogram = 0;
	 const double POUND_CALC = 2.2;
	 string programmerName = "Arman Babazadeh";
	 string dueDate = "10/10/22 ";

	 cout << "Enter a country name: " << countryName;
	 getline(cin, countryName);      // Input for country name at the top
	 cout << endl;

	cout << "Converter ToolKit " << endl;
	cout << "----------------- " << endl;

	cout << "1. " << "Temperature Converter" << endl;
	cout << "2. " << "Distance Converter" << endl;			// Menu output selection
	cout << "3. " << "Weight Converter" << endl;
	cout << "4. " << "Quit" << endl;

	cout << endl;

	cout << "Enter your choice (1-4): ";
	cin >> menuSelect;							// User inputs what choice they want

	if (menuSelect == 1) {
		cout << "Please enter temperature in Celcius (such as 24): ";
		cin >> tempCel;																// Gets user imput
		fahrenheit = (FAHRENHEIT_DIVISION * tempCel) + FAHRENHEIT_DIVISION_PART_2;											//Changes fagrebgeut ti celcius
		cout << "It is " << fahrenheit << " in Fahrenheit. " << endl;				// Than outputs the calculations
	}
	else if (menuSelect == 2) {
		cout << "Please enter distance in Kilometer (such as 18.54 ): ";        // User is asked to input distance in kilometer (option 2)
		cin >> kilometer;
		if (kilometer < 0) {
			cout << "!!! Program does not convert negative distance !!! " << endl; // IF user inputs a number less than 0 "Program does not convert negative distance!!!"

			cout << endl;
			cout << countryName << " Sound fun! " << endl;          // This what I like to call my goodbye code or statement. 
			cout << endl;
			cout << endl;
			cout << "Thank you for testing out my program!! " << endl;
			cout << "PROGRAMMER: " << programmerName << endl;
			cout << "CMSC140 Common Project 2 " << endl;
			cout << "Due Date: " << dueDate << endl;
			return 0;
		}	
		mile = (kilometer * MILE_CALC);
		cout << "It is " << fixed << setprecision(2) << mile << " Miles " << endl;   // This is for the kilometer converter to mile.
	

	}
	else if (menuSelect == 3) {                                                // Option (3)
		cout << "Please enter the weight in Kilogram (such as 121.6) ";
		cin >> kilogram;                                                  // User is prompt to give input. They are asked to enter a weight in kilogram
		if (kilogram < 0) {                                                              // Again if user inputs something less than 0 we are not doing negative weight.
			cout << "!!! Program does not convert negative weight !!! " << endl;
			cout << endl;
			cout << countryName << " Sound fun! " << endl;                     // This is what I call again my good bye statememnt just in case they enter a negative number.
			cout << endl;
			cout << endl;
			cout << "Thank you for testing out my program!! " << endl;
			cout << "PROGRAMMER: " << programmerName << endl;
			cout << "CMSC140 Common Project 2 " << endl;
			cout << "Due Date: " << dueDate << endl;
			return 0;                // Return 0 is key here allows for program to exit out and return if user enters number less than 0.
		}
		pound = (kilogram * POUND_CALC);
		cout << "It is " << fixed << setprecision(1) << pound << " Pounds " << endl;          // This is for the math changing kilogram into pound converter.
	}
	else if (menuSelect == 4) {
		cout << "Quit" << endl;                                 // And the user has the option to enter (4). This option allows for the user to exit the program/tool kit converter

	}
	else {
		cout << "Please enter number between 1-4 for Tool Kit converter to work! " << endl;
	}

	cout << endl;
	cout << countryName << " Sound fun! " << endl;
	cout << endl;
	cout << endl;
	cout << "Thank you for testing out my program!! " << endl;
	cout << "PROGRAMMER: " << programmerName << endl;
	cout << "CMSC140 Common Project 2 " << endl;
	cout << "Due Date: " << dueDate << endl;
	



	return 0;
}