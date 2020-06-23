

void setup() {
 
  Serial.begin(9600);//串口初始化，设置波特率
  
  pinMode(2, INPUT_PULLUP);//将引脚2设置为输入上拉模式，由板子内部
                           //结果一个上拉电阻连接到引脚2
  
  pinMode(13, OUTPUT);     //引脚13设置为输出模式，对应板子上的灯

}

void loop() {
  
  int sensorVal = digitalRead(2);  //读取引脚2的状态
 
  Serial.println(sensorVal);//将引脚2的状态通过串口打印出来

  
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);//如果引脚2是高电平状态，也就是此时开关未按下，
                          //则13号引脚输出低电平
  } else {
    digitalWrite(13, HIGH);//如果引脚2是低电平状态，也就是此时开关按下，
                          //则13号引脚输出高电平
  }
}