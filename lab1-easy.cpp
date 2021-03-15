#include<iostream>
using namespace std;

struct rabota{
char destination1[10];
char destination2[10];
char indicator[10];
//double  departure;
//double  arrive;
int number;
};

void main()
{

    setlocale(0, "");
    cout<<"Данная программа выводит данные о работниках старших 30-ти лет, не имеющих\n";
    cout<<"высшего образования\n";
    cout<<"\n";
rabota ludi[20],ludi_4[20];
int k=0;
int i=0;
for(int i=0;i<2;i++)
{
    //double difference=0.0;
    char indicator('y');

cout<<"Фамилия рабочего ";
cin>>ludi[i].destination1;
cout<<"Должность рабочего ";
cin>>ludi[i].destination2;
cout<<"Возраст ";
cin>>ludi[i].number;
cout<<"Имеет ли высшее образование? ";
cin>>indicator;
if (indicator=='n' && ludi[i].number>30)
{ludi_4[k++]=ludi[i];// Счетчик заполнения нового массива

}
}
for (int j=0;j<k;j++)
 {
     cout<<ludi[i].destination1<<ludi[i].destination2<<ludi[i].number<<"\n";
 }
}
