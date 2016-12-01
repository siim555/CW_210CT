#include <iostream> 
using namespace std;

bool isPrime(int number, int divisor=2){
    if (number == 1){ //one is always a prime
        return true;
    }
    else if(divisor==number){ //if number only divides by itself or one it is a prime
        return true;
    }
    else if(number%divisor == 0){
        return false;
    }
    return isPrime(number, ++divisor);
}

int main(){
    int num;
    cout << "Enter number to check\n";
    cin >> num;
    if (isPrime(num) == 1){
        cout << "This is a prime\n";
    }
    else{
        cout << "This is not a prime\n";
    }
    
}
