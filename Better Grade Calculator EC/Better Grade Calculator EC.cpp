// Better Grade Calculator
// Evan Crowley
// 04/29/2021
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

double percent[], TPoints, SPoints, Tintial, Sinital;
string valid = "y";
double assignmentspoints[];
double assignmenttpoints[];
int counter = 0;
int gcounter = 0;
string grade[];


void percentcheck()
{
    percent[gcounter] = (assignmentspoints[gcounter] / assignmenttpoints[gcounter]) * 100;

    if (percent[gcounter] >= 90)
    {
        grade[gcounter] = "A";
    }
    else if (percent[gcounter] >= 80)
    {
        grade[gcounter] = "B";
    }
    else if (percent[gcounter] >= 70)
    {
        grade[gcounter] = "C";
    }
    else if (percent[gcounter] >= 60)
    {
        grade[gcounter] = "D";
    }
    else
    {
        grade[gcounter] = "F";
    }
}

void printsolution()
{

}

int main()
{
    while (valid == "y" or valid == "Y" or valid == "n" or valid == "N")
    {
        if (valid == "y" or valid == "Y" and counter ==! 10)
        {
            cout << "How many points did you score? ";
            cin >> Sinital;
            SPoints = SPoints + Sinital;
            cout << "How many points were possible? ";
            cin >> Tintial;
            TPoints = TPoints + Tintial;
            assignmentspoints[counter] = SPoints;
            assignmenttpoints[counter] = TPoints;
            counter++;
            cout << "Add another project?(y/n) ";
            cin >> valid;
        }
        else if (valid == "n" or valid == "N" or counter == 10)
        {
            while (counter ==! 10)
            {
                percentcheck();
                gcounter++;
                cout << gcounter;
            }
        }
        else
        {
            cout << "That is not a valid option.\n";
            cout << "Add another project?(y/n) ";
            cin >> valid;
        }
    }
}
