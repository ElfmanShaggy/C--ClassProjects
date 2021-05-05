// Evan Crowley
// Determining the Best Sorting Algorithm
// 05/04/2021
#include <iostream>
using namespace std;
void printArray(int list[], const int SIZE);
void swapValues(int list[], int indexA, int indexB);
void bubbleSort(int list[], const int SIZE);
void selectionSort(int list[], const int SIZE);

int swaps = 0;
int iterations = 0;

int main()
{
	char typeSort = 0;
	int scoreTotal = 0;
	cout << "Would you like to use bubble sort (b) or selection sort (s)?";
	cin >> typeSort;
	cout << endl;
	cout << "You have Chosen: " << typeSort << endl;
	cout << endl;

	const int SHORT_LIST_SIZE = 7;
	int shortList[SHORT_LIST_SIZE] = { 2, 9, 4, 27, 8, 3, 1 };

	cout << "Shorter List" << endl << endl;cout << "Sorted: ";
	
	if (typeSort == 's')
	{
		selectionSort(shortList, SHORT_LIST_SIZE);
		printArray(shortList, SHORT_LIST_SIZE);
	}
	else if (typeSort == 'b')
	{
		bubbleSort(shortList, SHORT_LIST_SIZE);
		printArray(shortList, SHORT_LIST_SIZE);
	}
	cout << "Swaps: " << swaps << endl;
	cout << "Iterations: " << iterations << endl;

	scoreTotal = (swaps + iterations);

	cout << "Score: " << scoreTotal << endl;
	swaps = 0;cout << endl << endl << endl;

	const int ORDEREDSHORT_LIST_SIZE = 10;
	int orderdShortList[ORDEREDSHORT_LIST_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printArray(orderdShortList, ORDEREDSHORT_LIST_SIZE);

	cout << "Already sorted section" << endl;
	cout << "Swaps: " << swaps << endl;
	cout << "Iterations: " << iterations << endl;
	scoreTotal = (swaps + iterations);
	cout << "Score: " << scoreTotal << endl;
	swaps = 0;cout << endl << endl;

	const int REVERSESHORT_LIST_SIZE = 10;
	int reverseShortList[REVERSESHORT_LIST_SIZE] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	cout << "Reversed List" << endl << endl;
	cout << "Sorted: ";swaps = 0;
	
	if (typeSort == 's')
	{
	selectionSort(reverseShortList, REVERSESHORT_LIST_SIZE);
	printArray(reverseShortList, REVERSESHORT_LIST_SIZE);
	}
	else if (typeSort == 'b')
	{
		bubbleSort(reverseShortList, REVERSESHORT_LIST_SIZE);
		printArray(reverseShortList, REVERSESHORT_LIST_SIZE);
	}

	cout << "Swaps: " << swaps << endl;
	cout << "Iterations: " << iterations << endl;
	scoreTotal = (swaps + iterations);
	cout << "Score: " << scoreTotal << endl;
	swaps = 0;
	cout << endl << endl << endl;

	const int LONG_LIST_SIZE = 500;

	cout << "Longer List" << endl << endl;
	cout << "Sorted: ";

	int longList[LONG_LIST_SIZE] = { 58, 60, 60, 52, 8, 88, 59, 29, 35, 79, 63, 32, 30, 44, 53, 99, 65, 76, 80, 94,4, 21, 37, 61, 59, 1, 10, 84, 97, 57, 55, 20, 92, 89, 39, 71, 41, 83, 21, 23,47, 17, 9, 2, 4, 67, 62, 12, 86, 30, 84, 28, 76, 65, 69, 83, 21, 9, 75, 33, 93,68, 94, 32, 39, 13, 89, 22, 48, 24, 92, 42, 51, 8, 69, 48, 10, 66, 37, 9, 48,25, 34, 13, 21, 9, 6, 42, 53, 55, 91, 42, 47, 26, 53, 7, 58, 13, 24, 93, 50, 32,97, 17, 83, 83, 1, 68, 63, 8, 99, 50, 77, 57, 73, 88, 29, 85, 44, 29, 16, 90, 52,18, 55, 49, 51, 14, 22, 61, 44, 38, 85, 29, 92, 62, 74, 96, 10, 76, 5, 49, 70, 50,43, 69, 17, 22, 79, 87, 21, 69, 72, 15, 21, 98, 89, 3, 58, 88, 24, 38, 80, 69, 75,7, 89, 74, 26, 73, 45, 42, 87, 63, 40, 17, 89, 4, 17, 46, 11, 23, 71, 13, 65, 75,96, 78, 91, 12, 98, 46, 61, 46, 73, 22, 18, 5, 49, 65, 5, 20, 53, 59, 84, 90, 67,28, 21, 67, 17, 64, 62, 15, 52, 13, 62, 15, 83, 61, 100, 8, 4, 21, 25, 97, 30, 89,64, 57, 15, 88, 43, 66, 99, 70, 21, 96, 65, 20, 44, 97, 56, 15, 40, 85, 29, 68, 32,4, 14, 71, 33, 42, 20, 63, 100, 42, 6, 38, 48, 18, 75, 53, 19, 51, 37, 26, 42, 86,88, 94, 17, 4, 63, 24, 80, 94, 46, 52, 22, 8, 68, 27, 95, 53, 39, 53, 47, 48, 92,15, 61, 52, 63, 17, 17, 99, 91, 74, 74, 94, 39, 6, 25, 19, 96, 45, 41, 3, 46, 64,88, 8, 17, 18, 63, 31, 89, 65, 82, 89, 74, 45, 70, 56, 63, 33, 32, 21, 89, 13,62, 86, 79, 68, 68, 61, 44, 94, 70, 78, 14, 65, 26, 61, 46, 97, 72, 79, 26, 44,52, 62, 97, 18, 26, 60, 94, 18, 51, 32, 2, 83, 8, 17, 74, 85, 65, 69, 23, 19, 34,70, 50, 6, 29, 56, 92, 80, 73, 76, 39, 94, 43, 48, 61, 67, 15, 46, 43, 14, 70, 42,55, 28, 79, 74, 76, 89, 92, 13, 68, 52, 73, 21, 36, 86, 5, 32, 51, 44, 36, 28, 98,25, 33, 56, 89, 38, 8, 48, 98, 10, 95, 56, 87, 38, 79, 30, 70, 49, 48, 58, 78, 81,90, 93, 91, 12, 8, 4, 5, 11, 34, 79, 52, 83, 14, 88, 4, 22, 35, 49, 41, 11, 99, 91,35, 42, 56, 87, 54, 85, 51, 73, 21, 81, 27, 2, 51, 68, 24, 46, 15, 22, 78, 70, 37,42, 93, 17, 83, 5, 3, 50, 23, 37, 17, 74, 79, 79, 27, 4 };
	
	if (typeSort == 's')
	{
		selectionSort(longList, LONG_LIST_SIZE);
		printArray(longList, LONG_LIST_SIZE);
	}
	else if (typeSort == 'b')
	{
		bubbleSort(longList, LONG_LIST_SIZE);
		printArray(longList, LONG_LIST_SIZE);
	}
	cout << "Swaps: " << swaps << endl;
	cout << "Iterations: " << iterations << endl;
	scoreTotal = (swaps + iterations);
	cout << "Score: " << scoreTotal << endl;
	swaps = 0;
	cout << endl << endl << endl;
}

void printArray(int list[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int list[], const int SIZE)
{
	bool didSwap = false;
	do
	{
		didSwap = false;
		iterations += 1;
		for (int i = 0; i < SIZE - 1; i++)
		{
			iterations += 1;
			if (list[i] > list[i + 1])
			{
				swapValues(list, i, i + 1);
				didSwap = true;

			}

		}

	} while
		(didSwap);
}

void swapValues(int list[], int indexA, int indexB)
{
	int temp = list[indexA];
	list[indexA] = list[indexB];
	list[indexB] = temp;swaps++;
}

void selectionSort(int list[], const int SIZE)
{
	for (int i = 0; i < SIZE - 1; i++)
	{
		int minIndex = i;
		int minValue = list[i];
		iterations += 1;

		for (int j = i + 1; j < SIZE; j++)
		{
			iterations += 1;

			if (list[j] < minValue)
			{
				minIndex = j;
				minValue = list[j];
			}
		}

		if (i != minIndex)
		{
			swapValues(list, i, minIndex);
		}
	}
}