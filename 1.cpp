#include <iostream>
#include <algorithm>
#include <random>
using namespace std;

int main(){
    int number; //1 time
    vector<int> numbers = {}; //1 time
    cout << "Enter number:\n"; //1 time
    cin >> number; //1 time
    while(number){ //n times
        numbers.push_back(number % 10); //n times
        number/=10; //n times
    }
    reverse(numbers.begin(), numbers.end()); //1 time
    for(int i : numbers){ //n times
        cout << i; //n times
    }
    cout << "-->"; //1 time 
    random_device random_num; //1 time
    mt19937 randomfull(random_num()); //1 time
    //shuffle(begin(numbers), end(numbers), randomfull);
    for(auto i=(end(numbers)-begin(numbers))-1; i>0; --i){ //n times
        uniform_int_distribution<decltype(i)>d(0,i); //n times
        swap(begin(numbers)[i], begin(numbers)[d(randomfull)]);//n times
    }
    for(int i : numbers){//n times
        cout << i;//n times
    }
    cout << "\n";//1 time
}
