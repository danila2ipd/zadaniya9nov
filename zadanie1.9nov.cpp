

#include <iostream>

using namespace std;
const int MAX_UCH = 100;

struct UCH
{
    int id;
    int score;
};

int main() 
{
    setlocale(LC_ALL, "russian");
    int numUch;
    cout << "Введите количество участников: ";
    cin >> numUch;

    UCH Uch[MAX_UCH];

    for (int i = 0; i < numUch; i++) {
        cout << "Введите идентификационный номер и количество баллов участника " << i + 1 << ": ";
        cin >> Uch[i].id >> Uch[i].score;
    }

    for (int i = 0; i < numUch - 1; i++) {
        for (int j = 0; j < numUch - i - 1; j++) {
            if (Uch[j].score < Uch[j + 1].score) 
            {
                
                UCH temp = Uch[j];
                Uch[j] = Uch[j + 1];
                Uch[j + 1] = temp;
            }
        }
    }

    cout << "\nОтсортированный список участников:\n";
    for (int i = 0; i < numUch; i++) {
        cout << "Участник " << i + 1 << ": Идентификатор - " << Uch[i].id << ", Баллы - " << Uch[i].score << endl;
    }

    return 0;
}
