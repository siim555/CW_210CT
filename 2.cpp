#include <iostream>
#include <algorithm>
#include <random>
using namespace std;
//to get trailing zeros
//calculates power of of 5 in numb
int main(){
    float numb, divider, loopnumb;//1 time
    int endnumb;//1 time
    cout << "Enter numb:\n";//1 time
    cin >> numb;//1 time
    loopnumb=numb/5;//1 time
    divider=5*5;//1 time
    /*
    Take the number that you've been given the factorial of.
    Divide by 5; if you get a decimal, truncate to a whole number.
    Divide by 52 = 25; if you get a decimal, truncate to a whole number.
    Divide by 53 = 125; if you get a decimal, truncate to a whole number*/
    endnumb=loopnumb;//1 time
    while(loopnumb >= 1){//n times
        loopnumb=numb/divider;//n times
        divider=divider*5;//n times
        endnumb=endnumb+loopnumb;//n times
    }
    cout << endnumb;//1 time
}
