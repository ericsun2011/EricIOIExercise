#include <iostream>
using namespace std;
int counter = 0;
void MoveTower(int disc, char source, char dest, char spare)
{

    if (disc == 0)
    {
        return;
    }
    else
    {
        MoveTower(disc - 1, source, spare, dest);
        printf("Move disc %d from %c to %c \n", disc, source, dest);
        counter++;
        MoveTower(disc - 1, spare, dest, source);
    }
}
int main()
{
    int n;

    cout << "Enter a number between 1 and 8: ";
    cin >> n;

    MoveTower(n, 'A', 'C', 'B');
    cout << counter;

    return 0;
}