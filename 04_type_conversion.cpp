#include <iostream>
#include<vector>
using namespace std;

int main(){
    // numbers - int, float, double
    20; 500; -100; 0; // int (whole numbers)
    1.5f; 9.99f; 3.14f; 10.0f; // float, 7 digits after the decimal 
    1.5; 9.99; 3.14; 10.0; // double, 15 digits after the decimal
    // Python does not have double, only float


    // logical values (boolean) - bool
    true; false;

    // character - char
    'a'; 'B'; '5'; '$';// single character, singl quote
    "a" ;// string has double quote

    // convert float/double -> int, removes the decimal numbers
    // int -> float/double, adds .0f, .

    bool hungry = 500; 
    bool full = 0; 
    cout<< hungry << endl; // return 1; 1 stands for true, 0 stands for false
    cout<< full << endl; // return 0; 1 stands for true, 0 stands for false
    // non zero ex e.g. 100,-500,25.5 return true i.e. 1
    // zero ex e.g. 0,0.0f, 0.0 -> false i.e. 0

    // convert bool to number (true -> 1), (false -> 0)
    char intToChar = 65; // print A, because the ASCII conversion
    int charToInt = 'A'; // priint 65, because according the ASCII table, A is 65
    cout << intToChar << endl << charToInt << endl;
}