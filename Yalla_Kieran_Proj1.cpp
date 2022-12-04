// Kieran Yalla
// Class: CMSC140 CRN
// Instructor: Professor (REDACTED)
// Programming Project 1
// Write a program that presents itself and interacts with the user
// Due Date: 9/21/21 4:00pm EST
// I pledge that I have completed the programming assignment independently. 
// I have not copied the code from a student or any source.
// I have not given my code to any student.
// Print your Name here: Kieran Yalla
#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    // Constant variables designated since they will never change during execution
    const string robotname = "Nao";
    const string programmername = "Kieran Yalla";
    const string assignmentnumber = "1";
    const string duedate = "9/21/2021 4:00pm EST";
    const int dayspermonth = 30;
    const int onedogyear = 7;
    const int goldfishyear = 5;
    // Variables to take in use inputs
    string visitorname;
    int age, number1, number2;
    
    // Introducing the user to the robot and taking input for their name
    cout << "Hello, welcome to Montgomery College! My name is " << robotname << ", ""The most advanced"" AI out there. May I have your name please? ";
    cin >> visitorname; 
    
    // Displaying user's name then asking for the age of an important person or pet to them.
    cout << "I like that name, well its nice of you to be with us today, " << visitorname << " How about we play a little game together?\n";
    cout << "Please enter the age of an important pet or person to you. \nPlease enter only a number.\n"; 
    cin >> age;
    
    // Setting lots of double Variables in order to calculate, months, days, hours and minutes from input
    int agemonths = age * 12;
    int agedays = agemonths * dayspermonth;
    int agehours = agedays * 24;
    long ageminutes = agehours * 60;
    long ageseconds = ageminutes * 60;
    int dogage = age * onedogyear;
    int goldfishage = age * goldfishyear;
    
    // Displaying months, hours, minutes, hours and seconds calculations from user input with cout 
    cout <<"Thank you for the information. You have entered: " << age << ". If this is for a person, the age can be expressed as " << age << " years\nor " << agemonths << " months\nor";
    cout << " about " << agedays << " days \nor about " << agehours << " hours \nor about " << ageminutes << " minutes \nor about " << ageseconds << " seconds.";
    cout << "\nIf this is for a dog, it is " << dogage << " years old in human age.";
    cout << "\nIf this is for a gold fish, it is " << goldfishage << " years old in human age.\n\n";
    
    //Asking user to play another game and taking two whole numbers from their inputs
    cout << "Lets play another game, " << visitorname << ". Give me a whole number.\n";
    cin >> number1;
    cout << "Very well. Give me another whole number.\n";
    cin >> number2;
    
    // Computing sum and division along with division with decimals
    int sum = number1 + number2;
    int division = number1 / number2;
    double doublenumber1 = 1.0 * number1;
    double doublenumber2 = 1.0 * number2;
    double doubledivision = doublenumber1/doublenumber2;
    
    // Displaying the sum and division
    cout << "\nUsing the operator '+' in C++, the result of " << number1 << " + " << number2 << " is " << sum;
    cout << ". \nUsing the operator '/', the result of " << number1 << " / " << number2 << " is " << division;
    cout << " \nhowever, the result of " << setprecision(1) << fixed << doublenumber1 << " / " << doublenumber2 << " is about " << doubledivision << ".\n\n";
    
    // Displaying programmer name, project number,due date and saying thank you
    cout << "Thank you for testing my program!!";
    cout << "PROGRAMMER: " << programmername << endl;
    cout << "CSMC140 Common project " << assignmentnumber << endl;
    cout << "Due Date: " << duedate << endl;

    return 0;
}
