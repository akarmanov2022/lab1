//
// Created by arsen on 08-09-2022.
//

#include <iostream>
#include <algorithm>
#include "Lab1.h"

using namespace std;

void Lab1::task1Run() {
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 10; i++) {
        sum += add * i;
        cout << sum << endl;
        add *= 1.1;
    }
    cout << "Total sum is " << sum << endl;
}

void Lab1::task2Run() {
    double add = 1.0;
    double sum = 0.0;

    for (int i = 0; i < 1000; i++) {
        sum += add * i; // Поставьте условную точку останова здесь
        if (i % 3 == 0) {
            add *= 1.1;
        } else {
            add /= 3.0;
        }
    }
    cout << "Total sum is " << sum << endl;
}

void Lab1::task3Run() {
    int arr[] = {12, 21, 119, -80, 300, 75, 81, -8, 47, 31};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Source array is:" << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    SortAsc(arr, n);


    cout << "Sorted array is:" << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void Lab1::SortAsc(int *arr, int n) {
    int temp = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (arr[i] <= arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void Lab1::SortAsc(double *arr, int n) {
    double temp;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (arr[i] <= arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

void Lab1::task4Run() {
    double arr[] = {12.0, 21.5, 119.2, -80.7, 300.0, 75.5, 81.2, 8.1, 47.3, 31.2, 85.3, 100.1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Source array is:" << endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    Search(arr, n);

}

void Lab1::Search(double *arr, int n) {
    int val;
    cout << "Enter searching value: ";
    cin >> val;

    int count = 0;
    for (int i = 0; i < n; ++i)
        if (val >= arr[i])
            count++;

    cout << "Elements of array more than " << val << " is: " << count << endl;
}

void Lab1::task5Run() {
    int n = 8;
    char *chars = new char[n];

    cout << "Enter array of 8 chars" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "a[" << i << "] = ";
        cin >> chars[i];
    }

    cout << "Your array is:" << endl;
    for (int i = 0; i < n; ++i)
        cout << chars[i] << " ";
    cout << endl;

    cout << "All letters in your array:" << endl;
    for (int i = 0; i < n; ++i)
        if (chars[i] >= 'a' && chars[i] <= 'z')
            cout << chars[i] << " ";
    cout << endl;
}

void Lab1::task6Run() {
    double a = 2.0, b = 3.0, c = -2.0;
    int e1 = 5, e2 = 4, e3 = 5;

    cout << a << " ^ " << e1 << " = " << GetPower(a, e1) << endl;
    cout << b << " ^ " << e2 << " = " << GetPower(b, e2) << endl;
    cout << c << " ^ " << e3 << " = " << GetPower(c, e3) << endl;
}

void Lab1::DemoGetPower(double base, int exponent) {
    double result = GetPower(base, exponent);
    cout << base << " ^ " << exponent << " = " << result << endl;
}

double Lab1::GetPower(double base, int exponent) {
    double res = 1;
    for (int i = 0; i < exponent; ++i)
        res *= base;
    return res;
}

void Lab1::task7Run() {
    double a = 2.0, b = 3.0, c = -2.0;
    int e1 = 5, e2 = 4, e3 = 5;

    DemoGetPower(a, e1);
    DemoGetPower(b, e2);
    DemoGetPower(c, e3);
}

void Lab1::task8Run() {
    int val;
    cout << "Enter the number: ";
    cin >> val;

    int originVal = val;
    RoundToTens(val);

    cout << "For " << originVal << " rounded value is " << val << endl;
}

void Lab1::RoundToTens(int &value) {
    int div = 10;
    int quotient = value / div;
    int remainder = value % div;

    value = remainder < 5
            ? quotient * div
            : value + (div - remainder);
}

void Lab1::task9Run() {

    int a = 5;
    int b = 4;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    double c = 13.5;
    cout << "Address of c: " << &c << endl;
    bool d = true;
    cout << "Address of d: " << &d << endl;

}

void Lab1::task10Run() {
    int a[10] = {1, 2, 7, -1, 5, 3, -1, 7, 1, 6};
    cout << "Size of int type: " << sizeof(int) << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Address of a[" << i << "]: " << &a[i] << endl;
    }
    cout << endl;
    cout << "Size of double type: " << sizeof(double) << endl;
    double b[10] = {1.0, 2.0, 7.0, -1.0, 5.0, 3.5, -1.8, 7.2, 1.9, 6.2
    };
    for (int i = 0; i < 10; i++) {
        cout << "Address of b[" << i << "]: " << &b[i] << endl;
    }

}

void Lab1::task11Run() {
    int a = 5;
    int &b = a;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << endl;
    b = 7;
    cout << "Value of a: " << a << endl;
}

void Lab1::task12Run() {
    double a = 5.0;
    cout << "Address of a in main(): " << &a << endl;
    cout << "Value of a in main(): " << a << endl;
    cout << endl;
    Foo(a);
    cout << endl;
    cout << "Value of a in main(): " << a << endl;

}

void Lab1::Foo(double a) {
    cout << "Address of a in Foo(): " << &a << endl;
    cout << "Value of a in Foo(): " << a << endl;
    a = 15.0;
    cout << "New value of a in Foo(): " << a << endl;
}

void Lab1::task13Run() {
    int a = 5;
    int *pointer = &a;
    cout << "Address of a: " << &a << endl;
    cout << "Address in pointer: " << pointer << endl;
    cout << "Address of pointer: " << &pointer << endl;
    cout << endl;
    *pointer = 7;
    cout << "Value in a: " << a << endl;
    cout << "Value by pointer address: " << *pointer << endl;
}

void Lab1::task14Run() {
    int l = 8;
    auto *pDouble = new double[l]{1.0, 15.0, -8.2, -3.5, 12.6, 38.4, -0.5, 4.5};

    printArray(pDouble, l);
    delete[] pDouble;
}

void Lab1::task15Run() {
    int l = 8;
    bool *pBoolean = new bool[l]{true, false, true, true, false, true, false, false};
    printArray(pBoolean, l);
    delete[] pBoolean;
}

void Lab1::task16Run() {
    int l;
    cout << "Enter char array size:";
    cin >> l;

    char *chars = new char[l];

    for (int i = 0; i < l; ++i) {
        cout << "Enter a[" << i << "] = ";
        cin >> chars[i];
    }

    printArray(chars, l);

    delete[] chars;
}

void Lab1::printArray(int *arr, int length) {
    cout << "Array of integer:" << endl;
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Lab1::printArray(double *arr, int length) {
    cout << "Array of double:" << endl;
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Lab1::printArray(bool *arr, int length) {
    cout << "Array of boolean:" << endl;
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Lab1::printArray(char *arr, int length) {
    cout << "Array of chars:" << endl;
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Lab1::task17Run() {
    int l = 10;
    double *pDouble = new double[l]{1.0, 15.0, -8.2, -3.5, 12.6, 38.4, -0.5, 4.5, 16.7, 4.5};

    printArray(pDouble, l);
    SortAsc(pDouble, l);
    printArray(pDouble, l);

    delete[] pDouble;
}

void Lab1::task18Run() {
    int l = 10;
    int *pInt = new int[l]{1, 15, -8, -3, 12, 38, 0, 4, 16, 4};

    printArray(pInt, l);

    SearchIndexOf(pInt, l);
}

void Lab1::SearchIndexOf(const int *array, int l) {
    int search;
    cout << "Enter searching value:";
    cin >> search;

    int i = 0;
    for (; i < l; ++i)
        if (array[i] == search)
            break;

    cout << "Index of searching value " << search << " is: " << i << endl;
}
