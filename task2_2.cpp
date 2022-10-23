#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;

// Vector populating  function
vector<int> populateVector(vector<int> &tempvec, int iter)
{
    srand(time(NULL));
    for (int i = 0; i < iter; i++)
    {
        int random = rand() % 100;
        tempvec.push_back(random);
    }
    sort(tempvec.begin(), tempvec.end());
    tempvec.push_back(rand() % 100);
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
// testMoveMin Function
bool testMoveMin(vector<int> &in, vector<int> &out)
{
    sort(out.begin(), out.end());
    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] != out[i])
        {
            return false;
        }
    }
    return true;
}
// Main Function
int main()
{
    vector<int> input;
    int iter, time;
    cout << "Enter the how many elements you want populate in the vector: ";
    cin >> iter;
    input = populateVector(input, iter);
    vector<int> output(input);
    moveMin(input);
    cout << "The out of testMoveMin function is: " << testMoveMin(input, output) << endl;
    return 0;
}