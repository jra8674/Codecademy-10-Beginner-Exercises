#include <iostream>
#include <string>

using namespace std;

//8. Create a function that trims a string down to 10 characters

string firstTen(string string_in){
    string slice = string_in.substr(0,10);
    return slice;
}

int main(){
    //Handle Input
    string myStr;
    cout << "Please Enter a string: ";
    getline(cin, myStr);
    string out = firstTen(myStr);
    cout << "Trimmed Down to Ten Characters: " << out;
}
