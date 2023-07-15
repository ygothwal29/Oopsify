#include <iostream>

using namespace std;

int main()
{
    int a,b; //Defines integers a and b
    cin >> a >> b; //Takes input
    cout << "Original: " <<  a <<  " " << b;
    b = a + b; //Changes b to sum of a and b
    a = b - a; //Changes a to sum-a, that is, to original 'b'
    b = b - a; //Changes b to sum-a, that is, sum-(original 'b'), that is, original 'a'
    cout << "\nSwapped: " <<  a <<  " " << b;
    return 0;
}