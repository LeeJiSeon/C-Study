#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string a, b;
    int index = 2;
    cin >> a >> b;
    while(index >= 0) {
        if(a[index] == b[index]) {
            cout << a[index];
            index--;
        }
        else if(a[index] > b[index])
            while(index >= 0) {
                cout << a[index];
                index--;
            }
        else
            while(index >= 0) {
                cout << b[index];
                index--;
            }
    }
    return 0;
}