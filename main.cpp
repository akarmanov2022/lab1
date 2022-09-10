#include <iostream>
#include "Lab1.h"

using namespace std;

int main() {
    int i = 0;
    while (true) {
        cout << "Enter the task number or 0 for exit: ";
        cin >> i;
        cout << "Run task " << i << "..." << endl;
        switch (i) {
            case 0:
                return i;
            case 1:
                Lab1::task1Run();
                break;
            case 2:
                Lab1::task2Run();
                break;
            case 3:
                Lab1::task3Run();
                break;
            case 4:
                Lab1::task4Run();
                break;
            case 5:
                Lab1::task5Run();
                break;
            case 6:
                Lab1::task6Run();
                break;
            case 7:
                Lab1::task7Run();
                break;
            case 8:
                Lab1::task8Run();
                break;
            case 9:
                Lab1::task9Run();
                break;
            case 10:
                Lab1::task10Run();
                break;
            case 11:
                Lab1::task11Run();
                break;
            case 12:
                Lab1::task12Run();
                break;
            case 13:
                Lab1::task13Run();
                break;
            case 14:
                Lab1::task14Run();
                break;
            case 15:
                Lab1::task15Run();
                break;
            case 16:
                Lab1::task16Run();
                break;
            case 17:
                Lab1::task17Run();
                break;
            case 18:
                Lab1::task18Run();
                break;
            default:
                cout << "Incorrect value!" << endl;
        }
    }
}
