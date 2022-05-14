#include <bits/stdc++.h>
using namespace std;

void onel_trace(vector<int>& data){
    for(int i = 0; i < data.size() - 1; i++){
        cout << data.at(i) << " ";
    }
    cout << data.back() << endl;
}

void nl_trace(vector<int>& data){
    for(int i = 0; i < data.size(); i++){
        cout << data.at(i) << endl;
    }
}

void InsertionSort(vector<int>& data, int interval_idx, int& cnt){
    int v, j = 0;

    for(int i = interval_idx; i < data.size(); i = i+interval_idx){
        v = data.at(i);
        j = i - interval_idx;
        while( j>=0 && data.at(j)>v){
            data.at(j+interval_idx) = data.at(j);
            j = j - interval_idx;
            cnt++;
        }
        data.at(j+interval_idx) = v;
    }
}

vector<int> GenIntervalVec(int size){
    vector<int> IntervalVec = { 1 };
    while(true){
        int next = 3 * IntervalVec.at(0) + 1;
        if(next < size){
            IntervalVec.insert(IntervalVec.begin(), next);
        }else{
            break;
        }
    }

    return IntervalVec;
}


int ShellSort(vector<int>& data){
    int cnt = 0;
    vector<int> IntervalVec = GenIntervalVec(data.size());
    cout << IntervalVec.size() << endl;
    onel_trace(IntervalVec);

    for(int i=0; i < IntervalVec.size(); i++){
        InsertionSort(data, IntervalVec.at(i), cnt);
    }

    return cnt;
}

int main(){
    int MaxNum, SortCnt;
    cin >> MaxNum;

    vector<int> data(MaxNum);
    for(auto &value : data){
        cin >> value;
    }

    SortCnt = ShellSort(data);
    cout << SortCnt << endl;
    nl_trace(data);

    return 0;
}