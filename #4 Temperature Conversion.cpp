#include <iostream>
using namespace std;


//4. Program a temperature conversion tool
double tempConvert(double celsius){
    double fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

int main(){
    double celsius;
    cout << "Please Enter a Temperature to Convert: ";
    cin >> celsius;
    double fahr = tempConvert(celsius);
    cout << "The temperature in  Fahrenheit is: " << fahr << " degrees";
}
