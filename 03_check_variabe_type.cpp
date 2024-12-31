#include <iostream>

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

    int age = 23;
    float price = 24.99f;
    double PI = 3.141592653;
    bool hungry = true;
    char doller = '$';
    

    cout << typeid(age).name() << endl; // i stands for integer
    cout << typeid(price).name() << endl; // f stands for float
    cout << typeid(PI).name() << endl; // d stands for double
    cout << typeid(hungry).name() << endl; // b stands for boolean
    cout << typeid(doller).name() << endl; // c stands for character

    cout << typeid(1.5).name() << endl; 
    cout << typeid(1.5f).name() << endl; 




}