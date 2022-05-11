# ProgramContestStudy

プロコン勉強用リポジトリ

## 標準入出力の基本

入力, 出力に分けて説明

### 入力

- 1行に1要素

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
  int a;
  
  cin >> a;
}
```

- 1行に空白区切りで複数要素

```cpp
#include <bits/stdc++.h>
using namespace std;
// int N が既に与えられているとする. 

int main(){
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
}
```

### 出力

- 1要素出力

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
  cout << A << endl;
}
```

- 複数要素を1要素ごとに改行して出力

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
  
  for(auto v: vec){
    cout << v << endl;
  }
}
```

- 複数要素を空白区切りで出力

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
  
  for (int i = 0; i < vec.size()-1; i ++){
    cout << vec.at(i) << " ";
  }
  cout << vec.back() << endl;
}
```
