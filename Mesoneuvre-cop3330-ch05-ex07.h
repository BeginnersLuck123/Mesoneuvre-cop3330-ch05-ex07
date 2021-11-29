/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dynie Mesoneuvre
 */


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //initializing variables
    double a;
    double b;
    double c;
    
    //creating discriminant equation using doubles, a, b, and c
    double discriminant = pow(b, 2) - 4*(a)*(c);;
    
    //finding roots using doubles discriminant, a, b, and c
    double x1 = ((-(b)) + sqrt(discriminant))/(2*(a));
    double x2 = ((-(b)) - sqrt(discriminant))/(2*(a));

    //Asking for input and setting it as a 
    cout << "Input a: ";
    cin >> a;

    //Asking for input and setting it as b
    cout << "Input b: ";
    cin >> b;
    
    //Asking for input and setting it as c
    cout << "Input c: ";
    cin >> c;


    //if statement that will print output statement end program if discriminant is less than 0 
    if(discriminant < 0)
     {
        cout << "This equation had no real roots.";
        return 1;
    }


    //output statement with calculated roots
    cout << "The roots of this equation are " << x1 << " and " <<  x2 << ".";
    return 0;
}
