//Arduinoメトロノーム

// 定数の定義
const int buttonPin = 2; //ボタンピン
const int ledMinPin = 8; // LEDの最小ピン番号
const int ledMaxPin = 13; // LEDの最大ピン番号
const int speakerPin = 8; // スピーカーのピン番号

// 変数の定義
double BPM = 60; //テンポ
int ledPin = ledMinPin; // 現在のLEDのピン番号
int direction = 1; // LEDの移動方向（1: 正方向、-1: 逆方向）

//関数定義
//テンポ音
void playSound() {
  tone(speakerPin, 500); // 500Hzの音を鳴らす
  delay(10); // 1ミリ秒間音を鳴らす
  noTone(speakerPin); // 音を停止する
}

//テンポアップ
void BPM_UP(){
  if(digitalRead(buttonPin) == LOW){
    BPM += 1;
    Serial.begin(9600);
    Serial.print("BPM = ");
    Serial.println(int(BPM));
  }
}


void setup() {
  for (int pin = ledMinPin; pin <= ledMaxPin; ++pin) {
    pinMode(pin, OUTPUT); // L8~L13のLEDピンを出力モードに設定
  }
  pinMode(buttonPin, INPUT_PULLUP); //ボタンピンを入力モードに設定
  pinMode(speakerPin, OUTPUT); // スピーカーピンを出力モードに設定
}

void loop() {
  // LEDの光を往復させる
  digitalWrite(ledPin, HIGH); // 現在のLEDを点灯
  delay(((60/BPM)*1000)/5); // 少し待つ
  digitalWrite(ledPin, LOW); // 現在のLEDを消灯
  ledPin += direction; // 移動方向に応じて次のLEDピン番号を更新

  // 方向を切り替える条件をチェック
  if (ledPin == ledMaxPin || ledPin == ledMinPin) {
    direction *= -1; // 移動方向を反転
    playSound(); //LEDが端に来たら音を鳴らす
  }

  //ボタンによるテンポ変更
  BPM_UP();
}


