#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;

// // Vector populating  function
vector<int> populateVector(vector<int> tempvec, int iter)
{
    int temp ;
    cout << "Enter the elements: " ;
    for (int i = 0; i < iter; i++)
    {
        cin >> temp ;
        tempvec.push_back(temp) ;
    }
    return tempvec;
}
// Bubble Sorting Function
void moveMin(vector<int> &in)
{
    for (int i = in.size() - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (in[j] > in[j + 1])
            {
                swap(in[j], in[j + 1]);
            }
        }
    }
}
// Display Function
void display(vector<int> given_vect)
{
    for (int i = 0; i < given_vect.size(); i++)
    {
        cout << given_vect[i] << " ";
    }
    cout << endl;
}
// Main Function
int main()
{
    vector<int> input;
    int iter, time;
    cout << "Enter the how many elements you want populate in the vector: ";
    cin >> iter;
    input = populateVector(input, iter);
    cout << "Vector before using bubble sorting: ";
    display(input);
    moveMin(input);
    cout << "Vector after using bubble sorting: ";
    display(input);
    return 0;
}