#include <iostream>
using namespace std;

// Function to calculate average
float calculateAverage(int marks[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += marks[i];
    }

    return (float)sum / n;
}

// Function to find highest marks
int highestMarks(int marks[], int n)
{
    int highest = marks[0];

    for(int i = 1; i < n; i++)
    {
        if(marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

int main()
{
    int n;

    cout << "Enter number of subjects: ";
    cin >> n;

    int marks[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "\nAverage Marks = "
         << calculateAverage(marks, n) << endl;

    cout << "Highest Marks = "
         << highestMarks(marks, n) << endl;

    return 0;
}