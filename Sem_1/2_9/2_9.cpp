
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int wigth = n * 2 - 1, length = 2 * n - 1;

    int space = n - 1, star = n;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        for (int j = 0; j < star; j++) {
            cout << "*";
        }
        cout << endl;
        star += 1;
        space -= 1;
    }
    
    for (int i = 0; i < wigth; i++) {
        cout << "*";
    }
    cout << endl;

    space = 1, star = wigth-1;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < star; j++) {
            cout << "*";
        }
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        cout << endl;
        star -= 1;
        space += 1;
    }



    return 0;

}
