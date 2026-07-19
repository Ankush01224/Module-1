#include <iostream>
using namespace std;
int n =9;
int main(){

    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Loop for stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl; // Move to the next row
    }
    return 0;
}
