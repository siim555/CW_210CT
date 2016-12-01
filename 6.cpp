#include <iostream>
#include <vector>
#include <sstream>
#include<algorithm>
using namespace std;


int main(){
    vector<string> words = {};
    string text_enter;
    string temp;
    cout << "Enter string\n";
    getline(cin, text_enter);
    stringstream ss(text_enter);
    while(ss >> temp){
        words.push_back(temp);
    }
    for(unsigned i = words.size(); i-- > 0;){
        cout << words.at(i) << " ";
    }
}
