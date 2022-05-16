# キュー

「キュー」についてまとめる.

## アルゴリズム説明

FIFOに従ったデータ管理.

C++のキューについては[こちら](https://cpprefjp.github.io/reference/queue/queue.html)を参照.  
スレッドセーフなライブラリではないため注意.

リングバッファもQueueとしての機能を備えているが,  
本問題のような頻繁にキューに入れなおす処理が入る場合に活用可能.  

boostの[循環バッファ](https://boostjp.github.io/tips/circular_buffer.html)として活用が可能.  
ただし, AOJでは使えないようなので, Online上でのチェックはしていない.  
(Online上のテストケースだけ入力して確認実施.)

## ユースケース

* スケジューリングで利用.(workqueue)
