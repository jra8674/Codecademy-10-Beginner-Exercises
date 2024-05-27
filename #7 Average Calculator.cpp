#include <iostream>
#include <array>
using namespace std;

//7. Create an average calculator
int main(){
    int num_list[5] = {1,2,3,4,5};
    int x = sizeof(num_list)/4;
    int sum = 0;
    for (int i = 0; i < x; ++i){
        sum += num_list[i];
    }
    int avg = sum / x;
    cout << avg;
}
