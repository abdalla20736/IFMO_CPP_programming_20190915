//Даны числа n и m. Заполните массив размером n × m в шахматном порядке: 
// клетки одного цвета заполнены нулями, 
// а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. 
// В левом верхнем углу записано число 1.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   0   2   0   3
//   0   4   0   5   0
//   6   0   7   0   8

#include "t08_chess.h"
#include <iostream>


using namespace std;

int t08_chess() {
    
  int P,D,S=0;
    cin >> P >> D;
    int C[100][100];

      for(int L = 0; L < P; L++){
        for(int H = 0; H < D; H+=2){
        C[L][H] = 0;

        }
      }
    for(int L = 0; L < P; L++){
           int V;
            if (L%2!=0) V =1;
            else V = 0;
        for(int H = V; H < D; H+=2){

        S++;C[L][H]= S;
    }
    }

    for(int L = 0; L < P; L++){
        for(int H = 0; H < D; H++){
        if (C[L][H]%10==C[L][H])
        {cout << " ";}
        if (C[L][H]%100==C[L][H])
        {cout << "  ";}
        if (C[L][H]%1000==C[L][H])
        {cout << "  ";}
        cout << C[L][H];
        }
        cout << endl;
    }
}
