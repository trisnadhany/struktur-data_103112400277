
#include <iostream>
#include <cstring>
#include "stack.h"

using namespace std;

int main() {
    Stack S;
    infotype X, hasil;

    createStack(S);

    cout << "Stack telah dibuat. " << S.Top << endl;
    viewStack(S);

    cout << endl << "---push 3 data ---" << endl;

    strcpy(X.nim, "1234567890");
    strcpy(X.nama, "John Doe");
    push(S, X);

    strcpy(X.nim, "1234567891");
    strcpy(X.nama, "Jane Doe");
    push(S, X);

    strcpy(X.nim, "1234567892");
    strcpy(X.nama, "Budi");
    push(S, X);

    viewStack(S);

    cout << endl << "---pop 1 data ---" << endl;

    pop(S, hasil);

    cout << "Data yang di pop: "
         << hasil.nim << " "
         << hasil.nama << endl;

    cout << endl << "---isi stack sekarang ---" << endl;

    viewStack(S);

    return 0;
}
