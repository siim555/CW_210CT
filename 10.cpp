#include <iostream>
#include <vector>
using namespace std;

void subSequence(vector<int>& list){
    int count = 1, max = 0, end = 0, start = 0;
    for(int i = 0; i<list.size(); ++i){
        if (i != 0){
            if (list.at(i)>list.at(i-1)){
                count ++;
            }
            else {
                count = 1;
            }
        }
        if(count > max){
            max = count;
            end = i;
            
        }
    }
    start = end - max + 1;
    //cout << start;
    //cout << end;
    for(int x = 0;x<list.size(); ++x){
        if (x >= start && x <= end){
            cout << list.at(x);
        }
    }
}


int main(){
    vector<int> list = {1,5,2,1,3,1,2,3,4,5,6,7,8};
    subSequence(list);
}
