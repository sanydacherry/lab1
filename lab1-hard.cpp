#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
 
struct TOVAR{
    char Name[30];
    int Kol;
    int Stoim;
    int Date[3];
};
 
 
/*double SR (struct TOVAR p)
{
    double sr;
    int sum=0,i, n;
    
    for (i=0;i<n;i++)
    {
        sum=sum+p[i].Stoim;
    }
    sr=(double)sum/n;
    
    return (sr);    
}
*/
 
 
 
int main()
{
int n=5,i,j,count=0;
 
struct TOVAR SPISOK[10]={
                          {"Milk",25,7,2017, 10, 7}, 
                          {"Bread",31,4,2017, 5, 28},
                          {"Jogurt",44,6,205, 5, 9},
                          {"Water",65,5,2016, 6, 7},
                          {"Sugar",32,1,2017, 8, 10},
                          };
 
 
//средняя стоимость товара
 
int sum=0;
double sr;
for (i=0;i<n;i++)
    {
        sum=sum+SPISOK[i].Stoim;
    }
    sr=(double)sum/n;
    
printf("Средняя стоимость товара %.2lf\n",sr);
 
 
 //сортировка по стоиомости
 
 
struct TOVAR SPISOK1[10]; 
    for(i = 0; i <n - 1; ++i) 
    {            
        for( j = 0; j < n - 1; ++j) 
        {           
            if (SPISOK[j+1].Stoim < SPISOK[j].Stoim) 
            
              {
                SPISOK1[j] = SPISOK[j+1]; 
                SPISOK[j+1] = SPISOK[j]; 
                SPISOK[j] = SPISOK1[j];  
              }
         }
    }
 
 
    for(i = 0; i <n; ++i) 
    {            
       printf("%s, %d, %d, %d %d %d\n",SPISOK[i].Name,SPISOK[i].Kol,SPISOK[i].Stoim, SPISOK[i].Date[0],SPISOK[i].Date[1],SPISOK[i].Date[2]);
    }
 
 
//товары поступившие более 10мес назад
 
 
    for(i = 0; i <n; ++i) 
    {                         
         if(SPISOK[i].Date[0]<2017)
            printf("Товар поступивший более 10 месяцев назад %s, %d, %d, %d %d %d\n",SPISOK[i].Name,SPISOK[i].Kol,SPISOK[i].Stoim, SPISOK[i].Date[0],SPISOK[i].Date[1],SPISOK[i].Date[2]);
 
    }
 
    return 0;
    getch();
}