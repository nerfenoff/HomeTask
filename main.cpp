#include <iostream>
#include "211.h"

using namespace std;

int main()
{
    int n;
    cout << "input n: ";
    cin >> n;

    int choise = 0;

    for(int i = 0; i < 12; ++i)
        cout << i+1 << " - task " << i+1 << endl;
    cout << "choice: ";
    cin >> choise;

    switch (choise) {
    case 1: cout << task1(n);
        break;
    case 2: cout << task2(n);
        break;
    case 3: cout << task3(n);
        break;
    case 4: cout << task4(n);
        break;
    case 5: cout << task5(n);
        break;
    case 6: cout << task6(n);
        break;
    case 7: cout << task7(n);
        break;
    case 8: cout << task8(n);
        break;
    case 9: cout << task9(n);
        break;
    case 10: cout << task10(n);
        break;
    case 11: cout << task11(n);
        break;
    case 12: cout << task12(n);
        break;
    default: cout << "error";
        break;
    }

    return 0;
}
