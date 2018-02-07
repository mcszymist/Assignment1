#include <string>
using std::string;
using std::stoi;
#include <iostream>
using std::cout;
using std::endl;

int main(){
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
    }
    cout << total << endl;
    return 0;
}