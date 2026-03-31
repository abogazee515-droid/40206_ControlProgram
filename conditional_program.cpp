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
// If-Else Example
void IfElseExample()
{
    float eng, math, avg;

    cout << "Enter English score: ";
    cin >> eng;

    cout << "Enter Math score: ";
    cin >> math;

    avg = CalculateAverage(eng, math);

    if (avg >= 60)
        cout << "Status: Passed";
    else
        cout << "Status: Failed";

    cout << " | Average = " << avg << endl;
}

// Nested If Example
void NestedIfExample()
{
    float eng, math, avg;

    cout << "Enter English score: ";
    cin >> eng;

    cout << "Enter Math score: ";
    cin >> math;

    avg = CalculateAverage(eng, math);

    if (avg >= 60)
    {
        if (avg > 80)
            cout << "Status: Passed with Excellence";
        else
            cout << "Status: Passed";
    }
    else
        cout << "Status: Failed";

    cout << " | Average = " << avg << endl;
}

int main()
{
    return 0;
}
