#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    bool shipHits[4][4] = {
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1},
        {1, 0, 0, 0}};
        

    int hitCount = 0;
    int turns = 0;

    while (hitCount < 4)
    {
        int row, coloum;

        cout << "Enter row: ";
        cin >> row;

        cout << "Enter coloum: ";
        cin >> coloum;

        if (shipHits[row][coloum])
        {
            shipHits[row][coloum] = 0;
            hitCount++;
            cout << "Ship hitted..! " << (4 - hitCount) << " ships left for you\n\n";
        }
        else
        {
            cout << "Fail..! Better luck next time..!\n\n";
        }
        turns++;

    }
    
        cout << "Congratulation..!You win..! \n"
             << "You win in " << turns << " turns";
}