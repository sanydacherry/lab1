#include <iostream>
#include <string>
#include <ctime>
 
using namespace std;
const int SIZE = 3; // количество элементов массива структур
 
int main()
{
    //находим текущую дату
    setlocale(LC_ALL,"Russian");
    time_t t;
    time(&t);
    int m_month = localtime(&t)->tm_mon + 1;
    int m_day = localtime(&t)->tm_mday;
    int m_year = localtime(&t)->tm_year + 1900;
    cout << "Текущая дата: " <<  m_day << "." << m_month << "." << m_year << endl;
 
    struct football_player
    {
        string firstname;
        int day;
        int month;
        int year;
        string birthplace;
        string amplua;
        int count_games;
        int yellow_cards;
    };
 
    //создаем динамический массив структур
    football_player *player = new football_player[SIZE];
 
    //Заполняем массив структур
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Футболист #" << i + 1 << endl;
        cout << "Фамилия: ";
        getline(cin, player[i].firstname);
        cout << "Дата рождения:" << endl;
        cout << "День: ";
        cin >> player[i].day;
        cout << "Месяц: ";
        cin >> player[i].month;
        cout << "Год: ";
        cin >> player[i].year;
        cout << "Место рождения: ";
        cin.get();
        getline(cin, player[i].birthplace);
        cout << "Амплуа: ";
        getline(cin, player[i].amplua);
        cout << "Количество игр: ";
        cin >> player[i].count_games;
        cout << "Количество жёлтых карточек: ";
        cin >> player[i].yellow_cards;
        cin.get();
    }
    cout << "\n-----------------------------------------------------------------" << endl;
    cout << "Игроки по запросу:" << endl;
    int count = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(m_year - player[i].year > 20 && player[i].count_games / player[i].yellow_cards >= 10)
        {
            cout << "-----------------------------------------------------------------" << endl;
            cout << "Фамилия: " << player[i].firstname << endl;
            cout << "Дата и место рождения: " << player[i].day << "." << player[i].month << "." << player[i].year << ", " << player[i].birthplace << endl;
            cout << "Амплуа: " << player[i].amplua << endl;
            cout << "Количество игр: " << player[i].count_games << endl;
            cout << "Количество жёлтых карточек: " << player[i].yellow_cards << endl;
            count++;
        }
        else
        {
            if((m_year - player[i].year) == 20 && (player[i].month * 100 + player[i].day * 1) <= (m_month * 100 + m_day * 1) && player[i].count_games / player[i].yellow_cards >= 10)
            {
                cout << "-----------------------------------------------------------------" << endl;
                cout << "Фамилия: " << player[i].firstname << endl;
                cout << "Дата и место рождения: " << player[i].day << "." << player[i].month << "." << player[i].year << ", " << player[i].birthplace << endl;
                cout << "Амплуа: " << player[i].amplua << endl;
                cout << "Количество игр: " << player[i].count_games << endl;
                cout << "Количество жёлтых карточек: " << player[i].yellow_cards << endl;
                count++;
            }
        }
    }
    if(count == 0)
        cout << "Игроков по запросу нет!" << endl;
 
    delete []player;
 
    return 0;
}