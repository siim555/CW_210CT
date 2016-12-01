#include <iostream>
#include <vector>
#include <string>
using namespace std;

void vowelRemove(string word, int pos){
    if (pos >= 0){
        if (word.at(pos) == 'a'){
            word.erase(pos,1);
            cout << word << endl;
            vowelRemove(word, pos - 1);
        }
        else if (word.at(pos) == 'e'){
            word.erase(pos,1);
            cout << word << endl;
            vowelRemove(word, pos - 1);
        }
        else if (word.at(pos) == 'i'){
            word.erase(pos,1);
            cout << word << endl;
            vowelRemove(word, pos - 1);
        }
        else if (word.at(pos) == 'o'){
            word.erase(pos,1);
            cout << word << endl;
            vowelRemove(word, pos - 1);
        }
        else if (word.at(pos) == 'u'){
            word.erase(pos,1);
            cout << word << endl;
            vowelRemove(word, pos - 1);
        }
        else{
            cout << word << endl;
            vowelRemove(word, pos - 1);
        }
    }
    else{
        cout << word << endl;
    }
    
}

int main(){
    string text_enter;
    cout << "Enter string\n";
    cin >> text_enter;
    int pos = text_enter.length() - 1;
    vowelRemove(text_enter, pos);
}
