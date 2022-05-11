#include <bits/stdc++.h>
using namespace std;

void trace(vector<int>& data){
    for(int i = 0; i < data.size() - 1; i++){
        cout << data.at(i) << " ";
    }
    cout << data.back() << endl;
}

void InsertionSort(vector<int>& data){
    int v, j = 0;

    for(int i = 1; i < data.size(); i++){
        v = data.at(i);
        j = i - 1;
        while( j>=0 && data.at(j)>v){
            data.at(j+1) = data.at(j);
            j--;
        }
        data.at(j+1) = v;
        trace(data);
    }
}

int main(){
    int MaxNum;
    cin >> MaxNum;

    vector<int> data(MaxNum);
    for(auto &value : data){
        cin >> value;
    }

    trace(data);
    InsertionSort(data);

    return 0;
}