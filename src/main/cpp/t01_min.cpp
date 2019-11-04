//Напишите функцию min(a, b), вычисляющую минимум двух чисел. 
// Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. 
// Считайте четыре целых числа и выведите их минимум.
//Формат входных данных
//        Вводятся четыре целых числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//4
//5
//6
//7
//Sample Output:
//
//4

#include "t01_min.h"
#include <iostream>


using namespace std;

//function min 

//function min4 

int t01_min() {

    
int min(int W , int R){
if (W < R)
{
    return W;
}
else return R;}

int min4(int F , int C)
{
    if(min(F , C))
    {
        return F;
    }
    else return C;
}
int main(){
int W,R,F,C;
cin >> W >> R >> F >> C;
 
    cout << min4(min(W,R), min(F,C));
}
