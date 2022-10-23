#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;
// Class
class Dice
{
public:
    int num_of_throws;
    vector <int> array;
public:
    // Constructor
    Dice() { num_of_throws = 0; }
    // Setter
    void setData()
    {
        cout << "Enter how many times you want to throw the dice: ";
        cin >> num_of_throws;
        srand(time(NULL));
        for (int i = 0; i < num_of_throws; i++)
        {
            int random = 1 + rand() % 6;
            array.push_back(random);
        }
    }
    // Getter
    void getData()
    {
        cout << "Outputs after throwing dices " << num_of_throws << " times is: " << endl ;
        for (auto element = array.begin(); element != array.end() ; element++)
        {
            cout << * element << " " ;
        }
    }
};
// Main Function
int main()
{
    Dice d1;
    d1.setData();
    d1.getData();
    return 0;
}