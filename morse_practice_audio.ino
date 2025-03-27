int KEY = 8;
int AUDIO = 7;
int DELAY = 10;
int NOTE = 600;
bool HAD_TONE = false;

void setup(){
  // Serial.begin(9600);
  pinMode(KEY, INPUT);
}

void loop(){
  int keyVal = digitalRead(KEY);
  // Serial.println(keyVal);
  if( keyVal == 0) {
    tone(AUDIO, NOTE);
    HAD_TONE = true;
  }
  else if(HAD_TONE) {
    noTone(AUDIO);
    HAD_TONE = false;
  }
  delay(DELAY); 

}