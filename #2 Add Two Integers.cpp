#include <iostream>
using namespace std;

//2. Create a program that adds two integers

int sum(int x, int y){
    int added = x + y;
    return added;
}
int main(){
    int x;
    cout << "Please Enter a Number: ";
    cin >> x;
    int y;
    cout << "Please Enter a Number: ";
    cin >> y;
    cout << "Sum is " << sum (x, y);
}
