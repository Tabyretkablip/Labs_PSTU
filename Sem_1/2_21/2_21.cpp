#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n1, n2;
    bool isSorted = true;
    cout << "Введите первое число: ";
    cin >> n1;
    cout << "Введите следующее число (или 0 для завершения): ";
    cin >> n2;
    while (n2 != 0) {
        if (n1 > n2) {  
            isSorted = false;
            break; 
        }
        n1 = n2;  
        cout << "Введите следующее число (или 0 для завершения): ";
        cin >> n2;
    }
    if (isSorted) {
        cout << "Числа упорядочены по возрастанию" << endl;
    }
    else {
        cout << "Числа не упорядочены по возрастанию" << endl;
    }
    return 0;
}