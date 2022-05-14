# ソートの安定

* 与えられた入力の順序を維持したソートのことを安定, 維持されないケースのことを不安定と称する.

## 安定性の判定

* 愚直な手法. O(N^4)の計算量を必要とする

```cpp
isStable(in, out)
    for i = 0 to N-1
        for j = i+1 to N-1
            for a = 0 to N-1
                for b = a+1 to N-1
                    if in[i]とin[j]の数字が等しい && in[i] == out[b] && in[j] == out[a]
                        return false
    return true
```
