#include <iostream>
using namespace std;
// Simple If Example
void SimpleIfExample()
{
    int x = 5;

    if (x == 5)
    {
        x = x + 1;
        cout << "Value of x has been corrected to: " << x << endl;
    }

    cout << "Generated number = " << x << endl;
}
// Function to calculate average
float CalculateAverage(float a, float b)
{
    return (a + b) / 2;
}
