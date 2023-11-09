

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");

    const int Maxsize = 10;
    int array[Maxsize] = {1,2,3,-4,-5,-6,7,8,9,10};

    
    cout << "Положительные числа: ";
    for (int i = 0; i < sizeof(array) / sizeof(array[Maxsize]); ++i)
    {
        if (array[i] >= 0)
        {
            cout << array[i] << " ";
        }
    }
    cout << "Отрицательные числа: ";
    for (int i = 0; i < sizeof(array) / sizeof(array[Maxsize]); ++i)
    {
        if (array[i] < 0)
        {
            cout << array[i] << " ";
        }
    }

    return 0;
}
 