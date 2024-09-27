#include<iostream>
using namespace std;

class array {
    int a[100], b[100], c[200], n, m, p, q, t;

public:
    void accept();
    void display();
    void merge();
    array();
};

array::array() {
    p = 0; t = 0; q = 0;
}

void array::accept() {
    int i;
    cout << "Enter number of elements of 1st Array:";
    cin >> n;
    cout << "Enter elements of first array in ascending order:";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter number of elements of 2nd Array:";
    cin >> m;
    cout << "Enter elements of second array in ascending order:";
    for (i = 0; i < m; i++)
        cin >> b[i];
}

void array::merge() {
    while ((p < n) && (q < m)) {
        if (a[p] <= b[q]) {
            c[t] = a[p];
            p++;
        } else {
            c[t] = b[q];
            q++;
        }
        t++;
    }
    while (p < n) {
        c[t] = a[p];
        p++;
        t++;
    }
    while (q < m) {
        c[t] = b[q];
        q++;
        t++;
    }
}

void array::display() {
    for (int i = 0; i < t; i++)
        cout << c[i] << "\t";
    cout << endl;
}

int main() {
    array a;
    a.accept();
    a.merge();
    cout << "Merged array:";
    a.display();
    return 0;
}

