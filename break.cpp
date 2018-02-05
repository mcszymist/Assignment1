#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;

int main(){
    int total=0;
    vector<int> vecOfInt = {100,5,6,234,6457,1,2345,876,5234,5,57,5,325,455,6};
    for(auto i : vecOfInt){
        total += i;
    }
    cout << total << endl;
    return 0;
}