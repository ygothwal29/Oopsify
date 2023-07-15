#include <iostream>

using namespace std;

int main()
{
    int n,r; 
    cin >> n >> r; //Takes input
    r = r<(n-r) ? r:(n-r); //Chooses minimum of r and n-r
    int num = 1, den = 1; //Defines initial numerator and denominator
    for(int i = 0; i<r;i ++) //Iterates for loop upto minimum of r and n-r as calculated in 1st step
    {
        num*= (n-i); //Numerator is multiplication from n to (n-min(r,n-r))
        den*= (i+1); //Denominator is multiplication from 1 to min(r,n-r)
    }
    cout << "The value of " << n << "C" << r << " is " << num/den; //Prints output
    return 0;
}