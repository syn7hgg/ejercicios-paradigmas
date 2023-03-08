//
// Created by Andrés on 08-03-23.
//
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    srand (time(NULL));

    int x, max;
    cout << "Ingrese X: ";
    cin >> x;

    int arr[x];
    max = trunc(x/2);
    for (int i = 0; i < x; ++i) {
        arr[i] = rand() % max;
    }

    cout << "[";
    for (int i = 0; i < x; ++i) {
        if (i+1 == x) {
            cout << to_string(arr[i]) + "]" << endl;
        } else {
            cout << to_string(arr[i]) + ", ";
        }
    }

    int counts[max];
    // Initialize
    for (int i = 0; i < max; ++i) {
        counts[i] = 0;
    }

    for (int i = 0; i < x; ++i) {
        counts[arr[i]]++;
    }

    for (int i = 0; i < max; ++i) {
        cout << to_string(i) + ": ";
        for (int j = 0; j < counts[i]; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}