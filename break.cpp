#include <stack>
using std::stack;
#include <iostream>
using std::cout;
using std::endl;

int main(){
    int total = 0;
    stack<int> stackOfInt = {100,5,6,234,6457,1,2345,876,5234,5,57,5,325,455,6};
    for(auto i : stackOfInt){
        total += i;
    }
    cout << total << endl;
    return 0;
}
