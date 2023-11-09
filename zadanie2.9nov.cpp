

#include <iostream>
#include <cmath>

using namespace std;



int dvactodec(int binary)
{
    int dec = 0, i = 0;

    while (binary!= 0)
    {
        int perev = binary % 10;
        dec += perev * pow(2, i);
        binary /= 10;
        i++;
    }

    return dec;
}

int main()
{
    setlocale(LC_ALL, "russian");
    int binary;
    cout << "Введите число в двоичной системе счисления: ";
    cin >> binary;

    int dec = dvactodec(binary);

    cout << "В десятичной системе счисления: " << dec << endl;

    return 0;
}

