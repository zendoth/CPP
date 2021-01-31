#include<iostream>
#include "Reverse.h"
#include "conio.h"
using namespace std;
int main(){
    Reverse a;
    a.set_num();
    cout << "The reversed digits are " << a.reverse(a.len(a.getNum()),a.getNum()) << endl;
    getch();
}