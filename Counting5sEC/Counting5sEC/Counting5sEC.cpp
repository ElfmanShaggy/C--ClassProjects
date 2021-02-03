// Counting by 5s
// Evan Crowley
// 2/3/2021

#include <iostream>
using namespace std;
int main()
{
    for (int i = 100; i >= -100; i -=5)
    {
        if (i == -100)
            cout << i;
        else
            cout << i << ", ";
    }
}