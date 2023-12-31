# エンベデッドシステム　Arduino自由課題

## 1. 概要
### MAKER UNOを用いた、電子メトロノームの作成<br>
作成の動機...maker uno の基盤だけで何か役に立つものがないか考えた結果、LEDと音が鳴らせること、モニターでシリアル通信ができるという特徴を最大限生かせるものの１つとして”メトロノーム”があげられると考えたためである．また、音楽が好きなのも理由の一つ．

https://github.com/Sumisumisumith/Arduino/assets/130366050/a4858e74-540b-4ff5-ae21-0e36aa8eef4a

## 2. 環境
- 使用言語：C
- 開発環境：Arduino IDE

## 3. 仕様＆システム構成
主な仕様は以下の４点である．
- LED を往復させて光らせることで(L8~L13)、視覚的にもテンポをつかめる様子にする．
- LED を往復させる際、端に行った場合にテンポ音を鳴らす．
- ボタンを押すとテンポ（BPM/beat per minute）を変化できるようにする．
- シリアル通信で PC 上のモニターに現在のテンポを表示できるようにする．

システム構成の概要は次のようになる．<br>
 <p align="center"><img width="300" height="400" src="https://github.com/Sumisumisumith/Arduino/assets/130366050/0e5774af-46f4-4153-b95f-e7c238b2bbd3">  

各システムの詳細は以下のようになる．<br>  
<img width="400" alt="image" src="https://github.com/Sumisumisumith/Arduino/assets/130366050/5bd31ddf-d057-4477-82d5-a4b435748952">
<img width="400" alt="image" src="https://github.com/Sumisumisumith/Arduino/assets/130366050/11427de6-25ce-4310-b9a2-d18eea3f17ed">
<img width="400" alt="image" src="https://github.com/Sumisumisumith/Arduino/assets/130366050/7fe350b7-a0fc-4a78-a32e-afe8f507b35c">


## 4. 内容
概要にある動画を参照してください．

## 5．今後の計画
改善点としては、
- L8に光が来た時テンポ音以外に変な音が聞こえる点（カチッというような音が鳴る．L8をスピーカーピンに設定しているせい？）
- テンポを下げられない点
  
また、RTOSを利用してタスクに優先順位をつけるプログラムの作り方でも作成できる．

## 6．参考文献

## 6．その他
