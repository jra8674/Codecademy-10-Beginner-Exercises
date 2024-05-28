#include <iostream>
#include <list>
#include <string>

using namespace std;

//7. Create an average calculator

int main(){
    string nums_in;
    cout << "Please Enter a Few Numbers: ";
    cin >> nums_in;

    //Build List
    int x = nums_in.size();
    int num_list[x];
    for (int i = 0; i < x; i++){
        int y = (int)nums_in[i] - 48;
        num_list[i] = y;
    }

    //Produce Average from Array
    int z = 0;
    for (int i = 0; i < x; i++){
        z += num_list[i];
    }
    int avg = z / x;
    cout << "Average is: " << avg;
}
