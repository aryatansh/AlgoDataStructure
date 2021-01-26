// Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that selection sorts the array. Print the elements of sorted array.

// 1.It reads a number N.
// 2.Take Another N numbers as input and store them in an Array.
// 3.Sort the array using Selection Sort and print that Array.

// Input Format
// Constraints
// N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000.

// Output Format
// Sample Input
// 4
// 2
// -18
// 45
// 30
// Sample Output
// -18
// 2
// 30
// 45
// Explanation
// Write selection sort to sort the given integers in the problem.

#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int min = arr[i];
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}