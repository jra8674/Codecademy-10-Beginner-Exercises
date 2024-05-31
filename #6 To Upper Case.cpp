#include <iostream>
#include <cctype>

using namespace std;

int main(){
    //Intake the String
    string str_in;
    cout << "Please Enter a String: ";
    cin >> str_in;

    //Create uppercase string
    for (int i = 0; i < str_in.size(); i++){
        str_in[i] = toupper(str_in[i]);
    }

    //Print the new string
    cout << str_in;
}
