#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int>& ordered_list,int first_numb,int last_numb){
    int min=0, max = ordered_list.size() -1;
    int numb;
    int stop=0;
    
    try{
        while(stop==0){
            numb = (max+min)/2 +1;
            if(ordered_list.at(numb)-1 > first_numb and ordered_list.at(numb)- 1 < last_numb){
                return true;
                stop = stop +1;
            }
            if(numb < first_numb){
                min=numb +1;
            }
            else if (numb > last_numb){
                max = numb -1;  
            }
        }
    }
    catch(const std::out_of_range& e){
        return false;
    }
    
}
int main(){
    vector<int> ordered_list = {2,3,5,7,9,13};
    int low;
    int high;
    cout << "Enter lower end of range\n";
    cin >> low;
    cout << "Enter higher end of range\n";
    cin >> high;
    int end =  binarySearch(ordered_list, low, high);
    if (end == 0){
        cout << "INT in range not found \n";
    }
    else{
        cout << "INT in range was found \n";
    }
}
