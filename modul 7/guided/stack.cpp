
#include <iostream>
#include "stack.h"

using namespace std;

int isEmpty(Stack S) {
    if (S.Top == 0) {
        return 0;
    } else {
        return 1;
    }
}

void createStack(Stack &S) {
    S.Top = 0;
}

void push(Stack &S, infotype X) {
    if (S.Top < 10) {
        S.info[S.Top] = X;
        S.Top++;
    } else {
        cout << "Stack penuh, tidak dapat menambahkan elemen." << endl;
    }
}

void pop(Stack &S, infotype &X) {
    if (isEmpty(S) == 1) {
        S.Top--;
        X = S.info[S.Top];
    } else {
        cout << "Stack kosong, tidak dapat melakukan pop." << endl;
    }
}

void viewStack(Stack S) {
    if (isEmpty(S) == 0) {
        cout << "Stack kosong." << endl;
    } else {
        cout << "Isi Stack:" << endl;

        for (int i = S.Top - 1; i >= 0; i--) {
            cout << "NIM: " << S.info[i].nim
                 << ", Nama: " << S.info[i].nama << endl;
        }
    }
}
