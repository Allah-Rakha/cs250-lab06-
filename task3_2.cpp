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
// Single Element Sorting Function
void moveMin(vector<int> &in, int &t)
{
    for (int i = in.size() - 1; i > 0; i--)
    {
        if (in[i] < in[i-1])
        {
            swap(in[i], in[i-1]);
        }
        else { break; }
    }
    // Finding Time of execution of program
    t = clock();
    t = t / CLOCKS_PER_SEC ;
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
    // cout << "The vector after using algorithm sorting: ";
    sort(out.begin(), out.end());
    // display(in);
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
    // cout << "Vector before using sorting: ";
    // display(input);
    vector<int> output(input);
    moveMin(input, time);
    // cout << "Vector after using sorting: ";
    // display(input);
    cout << "The output of testMoveMin function is: " << testMoveMin(input, output) << endl;
    cout << "Time = " << time << endl;
    return 0;
}