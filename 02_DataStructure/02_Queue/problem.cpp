#include <bits/stdc++.h>
#include <boost/circular_buffer.hpp>
using namespace std;
using namespace boost;

int main(){
    int time_sum = 0;
    int size, quantum;
    string str, s;
    stringstream ss;

    string queue_name;
    int time;

    cin >> size >> quantum;

    circular_buffer<pair<string, int>> workqueue(size);

    for(int i = 0; i < size; i++){
        cin >> queue_name >> time;
        workqueue.push_back(pair<string, int>(queue_name, time));
    }

    while(!workqueue.empty()){
        pair<string, int> data = *(workqueue.begin());
        if(data.second > quantum){
            time_sum += quantum;
            data.second -= quantum;
            workqueue.pop_front();
            workqueue.push_back(data);
        }else{
            time_sum += data.second;
            cout << data.first << " " << time_sum << endl;
            workqueue.pop_front();
        }
    }

    return 0;
}