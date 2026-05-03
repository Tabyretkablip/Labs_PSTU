#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int Size = 10;  // Максимальный размер матриц
{
    bool found = false;
    // Перебираем все элементы матрицы
    for (int i = 0; i < n; i++)          
    {
        for (int j = 0; j < n; j++)      
        {
            int element = a[i][j];       

            // Флаги для проверки условий
            bool isMinRow = true;   
            bool isMaxRow = true;   ?
            bool isMinCol = true;   
            bool isMaxCol = true;   
            for (int k = 0; k < n; k++)
            {
                if (a[i][k] < element) isMinRow = false; 
                if (a[i][k] > element) isMaxRow = false; 
            }

            //  ПРОВЕРКА ПО СТОЛБЦУ 
            for (int k = 0; k < n; k++)
            {
                if (a[k][j] < element) isMinCol = false;
                if (a[k][j] > element) isMaxCol = false;
            }

            //  УСЛОВИЕ СЕДЛОВОЙ ТОЧКИ 
            if ((isMinRow && isMaxCol) || (isMaxRow && isMinCol))
            {
                cout << "Седловая точка: " << element
                    << " (строка " << i << ", столбец " << j << ")" << endl;
                found = true;
            }
        }
    }

    if (!found)
        cout << "Седловых точек нет." << endl;
}

int main()
{
    srand(time(0));          
    int n;

    cout << "Размер матрицы: ";
    cin >> n;                

    int a[Size][Size];

    //  ЗАПОЛНЕНИЕ И ВЫВОД МАТРИЦЫ 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 21 - 10;  
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    SaddlePoints(a, n);      

    return 0;
}