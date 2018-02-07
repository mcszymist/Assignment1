<<<<<<< HEAD
#include <string>
using std::string;
using std::stoi;
=======
#include <stack>
using std::stack;
>>>>>>> 956f5442b64d5f8b716e7e08975df525510cf397
#include <iostream>
using std::cout;
using std::endl;

int main(){
<<<<<<< HEAD
    int total=0;
    string number;
    string stringOfInt = "100,5,6,234,6457,1,2345,876,5234,5,57,5,325,455,6";
    for(auto i : stringOfInt){
        if(i == ','){
            total += stoi(number);
            number = std::string();
        }
        else{
            number += i;
        }
=======
    int total = 0;
    stack<int> stackOfInt = {100,5,6,234,6457,1,2345,876,5234,5,57,5,325,455,6};
    for(auto i : stackOfInt){
        total += i;
>>>>>>> 956f5442b64d5f8b716e7e08975df525510cf397
    }
    cout << total << endl;
    return 0;
}
