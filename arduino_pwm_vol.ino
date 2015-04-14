int ledPin = 9;      // LEDはピン9に接続
int analogPin = 3;   // アナログピン3にポテンショメータ
int val = 0;

void setup() {
  //PWMを高速化 (8MHzで15KHzぐらい）
    TCCR1B &= B11111000;
  TCCR1B |= B00000001;
  pinMode(9, OUTPUT);
}

void loop() {
  val = analogRead(analogPin);
  // 得たアナログ値を1/4して、0-1023の値を0-255に変換
//  val++;
//  if(val>1024)val=0;
  analogWrite(ledPin, val / 4);
  delay(1);
}
