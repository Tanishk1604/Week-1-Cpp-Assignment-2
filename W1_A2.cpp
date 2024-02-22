// Q 1 -
// output
//  0

// Q 2 -
// output -
// 1 1

// Q 3 -
// output
// 2

// Q 4 -
#include <iostream>
using namespace std;
int main()
{

    int radius, height, v;
    cout << "Enter radius : " << endl;
    cin >> radius;
    cout << "Enter height : " << endl;
    cin >> height;

    v = 3.14 * radius * radius * height;
    cout << "The volume is : " << v << endl;


    // Q 5-
    char ch1, ch2;
    int x;
    cout << "enter 1st character : ";
    cin >> ch1;
    cout << "enter 2nd character : ";
    cin >> ch2;

    x = (int)ch2 - (int)ch1;

    cout << "difference between ASCII of two characters is : " << x;

    return 0;
}

// Q 6 -
// output -
// 49