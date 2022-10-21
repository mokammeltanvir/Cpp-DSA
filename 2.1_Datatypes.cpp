#include<iostream>
using namespace std;
int main()
{   
    /** Data types in C/C++ 
    =======================
    Primitive data types
    =======================
    1. integer
    2. float
    3. double
    4. char
    5. boolean
    6. void
    7. wide char
    =====================
    Derived data types
    =====================
    1. array
    2.function
    3. pointer
    4. reference
    
    =========================
    User-defined data types
    =========================
    1. class
    2.structure
    3. union
    4. enumeration
    5. typedef defined data types
    */

    int a, //declaration
    a = 10; //initialization
    float b = 10.5;
    char c = 'A';
    bool d = true;

    cout << "Size of int: a = " <<sizeof(a) << endl;
    cout << "Size of float: b = " <<sizeof(b) << endl;
    cout << "Size of char: c = " <<sizeof(c) << endl;
    cout << "Size of bool: d = " <<sizeof(d) << endl;

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    return 0;
}