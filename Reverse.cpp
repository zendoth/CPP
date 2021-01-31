/*
Reverse
Written by Mark Nicholas Heah
30/1/2021

Object Oriented program that takes an int input and prints the reversed numbers
*/
#include<iostream>
#include<cmath>
#include<sstream>
#include "Reverse.h"
using namespace std;


void Reverse::set_num(){
    cout << "Enter the digits you want to reverse" << endl;
    cin >> myNum;
}

int Reverse::len(int num){
    return int(log10(num))+1;
}

string Reverse::reverse(int length, int num){
    string reverse = "";
    for(int i=0;i<length;i++){
        int k = num%10;
        num/=10;
        stringstream ss;
        ss << k; 
        char j;
        ss >> j;
        reverse += j;
    }
    return reverse;
}


