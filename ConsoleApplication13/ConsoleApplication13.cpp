// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    /*int s;
    int R;
    do
    {
    cout << "Введите размер стороны квадрата: ";
    cin >> R;

    if (R<=0)
    {
        cout << "Сторона квадрата должна быть больше 0." << endl;
    }

    cout << R"(    _______ _______ _______ _______ _______
    |*****| |*    | |*****| |     | |*****|
    | ****| |**   | | *** | |     | | *** |
    |  ***| |***  | |  *  | |  *  | |  *  |
    |   **| |**** | |     | | *** | | *** |
    |____*| |*****| |_____| |*****| |*****|
    1       2       3       4       5
    _______ _______ _______ _______ _______
    |*   *| |*    | |    *| |*****| |    *|
    |** **| |**   | |   **| |**** | |   **|
    |*****| |***  | |  ***| |***  | |  ***|
    |** **| |**   | |   **| |**   | | ****|
    |*___*| |*____| |____*| |*____| |*****|

    6       7       8       9       10)" << endl;

    cout << "Выбирите вариант для построения (1-10). 0 для выхода.";
    cin >> s;

    for (int i = 1; i <=R ; i++)
    {
        for (int j = 1; j <=R ; j++)
        {
            switch (s)
            {
                case 0:
                break;
                case 1: if (j>=i) cout << "*"; else cout << " ";
                break;
                case 2: if (j<=i) cout << "*"; else cout << " ";
                break;
                case 3: if (j>=i && i+j<=R+1) cout << "*"; else cout << " ";
                break;
                case 4: if (j<=i && i+j>=R+1) cout << "*"; else cout << " ";
                break;
                case 5: if (j>=i && i+j<=R+1 || j<=i && i+j>=R+1) cout << "*"; else cout << " ";
                break;
                case 6: if (j<=i && i+j<=R+1 || j>=i && i+j>=R+1) cout << "*"; else cout << " ";
                break;
                case 7: if (j<=i && i+j<=R+1) cout << "*"; else cout << " ";
                break;
                case 8: if (j>=i && i+j>=R+1) cout << "*"; else cout << " ";
                break;
                case 9: if (j+i>R+1) cout << " "; else cout << "*";
                break;
                case 10: if (j+i<R+1) cout << " "; else cout << "*";
                break;
                default: cout << "Такой вариант отсутствует." << endl;
                break;
            }
        }
        cout << endl;
    }


    }
    while(s);*/


    /*int sum=0;
    int a;
    int b;
    int c;
    int j = 999;
    int i = 100;
    for (; i <= j; i++)
    {
        for (; i <= j; j--)
        {
            a = j / 100;
            b = j % 10;
            c = (j % 100) / 10;
            if (a == b || b == c || c == a)
                sum++;
        }
    }
    cout << "Количество целых чисел в диапазоне от 100 до 999 у которых две одинаковые цифры = " << sum << endl;*/ 

    /*int sum=0;
    int a;
    int b;
    int c;
    int j = 999;
    int i = 100;
    for (; i <= j; i++)
    {
        for (; i <= j; j--)
        {
            a = j / 100;
            b = j % 10;
            c = (j % 100) / 10;
            if (a != b && b != c && c != a)
                sum++;
        }
    }
    cout << "Количество целых чисел в диапазоне от 100 до 999 у которых все цифры разные = " << sum << endl; */

    /*int n;
    cout << "Введите число: " << endl;
    cin >> n;
    int res = 0;
    int i = 1;
    while (n) 
    {
        if (n % 10 != 3 && n % 10 != 6) 
        {
            res += (n % 10) * i;
            i *= 10;
        }
        n /= 10;
    }

    cout << res << endl; */

    /*int A;
    int B;
    cout << "Введите число: ";
    cin >> A;
    for (int i = A-1; i > 1; i--)
    {
        B = i; 
        if ((A % (B * B) == 0) && (A % (B * B * B) != 0))
        {
            cout << B << "\n";
        }
    }*/

    /*int a;
    cout << "Введите число: ";
    cin >> a;

    if (a == 1 || a == 27)
        cout << "Да, "<< a << '*' << a << " равен кубу суммы цифр";
    else
    cout << "Нет, " << a << '*' << a << " неравен кубу суммы цифр";*/

    /*int a;
    cout << "Введите число:";
    cin >> a;
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        cout << i << "\n";
    } */   

    /*int a;
    int b;
    int l;
    cout << "Введите два числа через enter:";
    cin >> a >> b;
    if(a > b)
        l = a;
    else
        l = b;
    for (int i = 1; i < l; i++)
    {
        if (a % i == 0 && b % i == 0)
        cout << i << "\n";
    } */



   /* int h = 5, w = 5, a;
    cout << "Введите величину ячейки шахматной доски.\na = ";
    cin >> a;
    for (int i = 0; i < h; i++)
    {
        for (int jj = 0; jj < a; jj++)
        {
            for (int j = 0; j < w; j++)
            {
                for (int ii = 0; ii < a; ii++)
                {
                    if ((i + j) % 2)
                        cout << '-';
                    else
                       cout << 'x';
                }
            }
            cout << '\n';
        }
    }
    cout << "\n\n\n";*/

   /* int arr[6];
    for (int i = 0; i < 6; ++i)
    {
        arr[i] = rand() % (100 - 50) + 50;
    }
    int min = 0;
    int max = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[min] > arr[i])
            min = i;
        if (arr[max] < arr[i])
            max = i;
    }
    cout << "Минимальное число: " << arr[min] << "\nМаксимальное число: " << arr[max];*/

   /* int a;
    int b;
    int c = 12;
    int* arr = new int[c];
    for (int i = 0; i < c; i++)
    {
        arr[i] = rand() % (42000 - 24000) + 24000;
    }

    cout << "Введите диапазон через enter: ";
    cin >> a >> b;

    int max = a;
    int min = a;
    for (int i=a; i<b; i++)
    {
        if (arr[i]>arr[max])
            max=i;
        if (arr[i]<arr[min])
            min=i;
    }

    cout << "Максимум: " << max+1 << "\n";
    cout << "Минимум: " << min+1 << "\n"; */

   /* int N;
    cout << "Введите колличество элементов массива: ";
    cin >> N;

    double* arr = new double[N];
    cout << "\nВведите " << N << " чисел: ";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    double summa_otric = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            summa_otric += arr[i];
        }
    }
    cout << "\nСумма отрицательных чисел: " << summa_otric;

    int maxArr = 0, minArr = 0;
    double proizvedenie = 1;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < arr[minArr])
        {
            minArr = i;
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > arr[maxArr])
        {
            maxArr = i;
        }
    }

    if (maxArr < minArr)
    {
        swap(minArr, maxArr);
    }

    for (int i = minArr + 1; i < maxArr; ++i)
    {
        proizvedenie *= arr[i];
    }
    cout << "\nПроизведение элементов между минимальным и максимальным значением: " << proizvedenie;

    double chtProizvedenie = 1;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            chtProizvedenie *= arr[i];
        }
    }
    cout << "\nПроизведение элементов с чётными номерами: " << chtProizvedenie;

    double otric1 = 1, otric2 = 1;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            otric1 = i;
            break;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            otric2 = i;
        }
    }
    double summa = 0;
    for (int i = otric1 + 1; i < otric2; i++)
    {
        summa += arr[i];
    }
    cout << "\nСумма элементов между первым и последним отрицательными числами: " << summa;*/

    /*int a[10], b[5], c[5];

    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 20 - 10;
        cout << "a[" << i << "] = " << a[i] << endl;
    }
        cout << endl;

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
        cout << "b[" << i << "] = " << b[i] << endl;
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i + 5];
        cout << "c[" << i << "] = " << c[i] << endl;
    }
    cout << endl; */

    /*const int a = 3;
    int arr1[a];
    int arr2[a];
    int arrs[a];

    for (int i = 0; i < a; i++)
    {
        arr1[i] = rand() % (20 - 10) + 10;
        cout << arr1[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < a; i++)
    {
        arr2[i] = rand() % (20 - 10) + 10;
        cout << arr2[i] << "\t";
    }
    cout << "\nThe third array with the sum of two arrays:\n";
    for (int i = 0; i < a; i++)
    {
        arrs[i] = arr1[i] + arr2[i];
        cout << "arr3[" << i << "] = ";
        cout << arrs[i] << "\n";
    }*/

}
