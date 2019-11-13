//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>


using namespace std;

int t05_palindrom() {
int D=1,L,H,C;
char S[65000];
cin >> S;
for(L=0;S[L]!='\0';L++);
for(H=0,C=L-1;H<=L;H++,C--)
{
     if(S[H]!=S[C])
       D=0;
}
if(D==1)
    cout << "yes";
else cout << "no";
}
