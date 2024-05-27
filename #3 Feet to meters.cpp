#include <iostream>
using namespace std;

//3. Create a program that converts meters to feet

double feetToMeters(double meters){
    return meters * 3.281;
}

int main(){
    double x;
    cout << "Please Enter a Value to Convert: ";
    cin >> x;
    cout << "Distance in Feet is " << feetToMeters(x);
}
