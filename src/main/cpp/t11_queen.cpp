//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//Формат входных данных
//
//        Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//        Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//Sample Input 1:
//
//1 7
//2 4
//3 2
//4 8
//5 6
//6 1
//7 3
//8 5
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1 8
//2 7
//3 6
//4 5
//5 4 
//6 3
//7 2
//8 1
//Sample Output 2:
//
//YES

#include "t11_queen.h"
#include <iostream>
#include <cmath>


using namespace std;

int t11_queen() {
 int C[8][2];
 for(int L = 0 ; L < 8;L++)
for(int H = 0 ; H < 2;H++){
cin >> C[L][H];}
bool V = true;
for(int L = 0; L < 8;L+=2){
for(int H = 1; H < 8;H+=2){
if (((C[L][0]== C[H][0]) || (C[L][1] == C[H][1])) || (abs(C[L][0]-C[H][0])) == (abs(C[L][1]- C[H][1])))
V=false;}} 
 if (V==true) {cout << "NO";}
else {cout << "YES";}
 
}
