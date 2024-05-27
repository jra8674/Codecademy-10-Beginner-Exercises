#include <iostream>
using namespace std;

//5. Create a floating-point multiplier program
double multiply(double x, double y){
    double product = x * y;
    return product;
}

int main(){
    double x;
    cout << "Please Enter 1st Number: ";
    cin >> x;
    double y;
    cout << "Please Enter 2nd Number: ";
    cin >> y;
    cout << "Product is: " << multiply(x, y);
}
