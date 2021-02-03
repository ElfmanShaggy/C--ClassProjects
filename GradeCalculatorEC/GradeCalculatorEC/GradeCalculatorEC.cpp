// Grade Calculator
// Evan Crowley
// 02/03/2021
#include <iostream>
using namespace std;

double percent, TPoints, SPoints, Tintial, Sinital;
string valid = "y";
string grade = "";
int main()
{
    while (valid == "y" or valid == "Y" or valid == "n" or valid == "N")
    {
        if (valid == "y" or valid == "Y")
        {
            cout << "How many points did you score? ";
            cin >> Sinital;
            SPoints = SPoints + Sinital;
            cout << "How many points were possible? ";
            cin >> Tintial;
            TPoints = TPoints + Tintial;
            cout << "Add another project?(y/n) ";
            cin >> valid;
        }
        else if (valid == "n" or valid == "N")
        {
            percent = (SPoints / TPoints) * 100;

            if (percent >= 90)
                {
                    grade = "A";
                }
            else if (percent >= 80)
                {
                    grade = "B";
                }
            else if (percent >= 70)
                {
                    grade = "C";
                }
            else if (percent >= 60)
                {
                    grade = "D";
                }
            else
                {
                    grade = "F";
                }
            break;
        }
        else
        {
            cout << "That is not a valid option.\n";
            cout << "Add another project?(y/n) ";
            cin >> valid;
        }
    }
    cout << "Points scored: " << SPoints;
    cout << "\nPoints possible: " << TPoints;
    cout << "\nPercentage: " << percent << "%";
    cout << "\nLetter Grade: " << grade;
}