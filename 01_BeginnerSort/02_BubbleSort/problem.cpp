#include <bits/stdc++.h>
using namespace std;

void trace(vector<int>& data){
    for(int i = 0; i < data.size() - 1; i++){
        cout << data.at(i) << " ";
    }
    cout << data.back() << endl;
}

int BubbleSort(vector<int>& data){
    int SortCnt = 0;
    bool flag = true;

    while(flag){
        flag = false;
        for(int j = data.size() - 1; j > 0; j--){
            if(data.at(j) < data.at(j-1)){
                swap(data.at(j), data.at(j-1));
                flag = true;
                SortCnt++;
            }
        }
    }

    return SortCnt;
}

int main(){
    int MaxNum, SortCnt;
    cin >> MaxNum;

    vector<int> data(MaxNum);
    for(auto &value : data){
        cin >> value;
    }

    SortCnt = BubbleSort(data);
    trace(data);
    cout << SortCnt << endl;

    return 0;
}