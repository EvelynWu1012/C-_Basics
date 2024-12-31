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

    int price = 23;
    price = 50;
    cout <<price<< endl;
    // naming variables using camelCase
    float myScore = 99.9f;
    double myPrice = 99.9999;

    bool hungry = true;
    char doller = '$';

    const int age = 23; // constant variable means its value can not be changed
    // age = 50 will give error
    cout << age; 

    // auto, let the compiler figure out its type 
    // it is not recommended for the smaller programm
    auto PI = 3.141592653;
    cout << PI;

}