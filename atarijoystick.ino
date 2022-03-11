
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

enum eJoystick{
  UP =0,
  DOWN,
  LEFT,
  RIGHT,
  FIRE
};


int dButton1Pin = 53;//up
int dButton2Pin = 52;//down
int dButton3Pin = 51;//letf
int dButton4Pin = 50;//right
int dButton5Pin = 48;//fire

int Joystick[5];
int joyio[5] = { dButton1Pin,dButton2Pin,dButton3Pin,dButton4Pin,dButton5Pin };
// 1K PULL DOWN ON EACH DIGITAL IO


void setup() {  
  
  pinMode(dButton1Pin, INPUT);   
  pinMode(dButton2Pin, INPUT);   
  pinMode(dButton3Pin, INPUT);   
  pinMode(dButton4Pin, INPUT);   
  pinMode(dButton5Pin, INPUT);   
  
  Serial.begin(9600);
}

void loop() {

  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);    
 
   for(int i = 0; i < 5; i++)
   {
     Joystick[i] = digitalRead(joyio[i]);
   }

  Serial.print("UP: "); Serial.println(Joystick[0]); 
  Serial.print("DOWN: ");Serial.println( Joystick[1]); 
  Serial.print("LEFT: ");Serial.println( Joystick[2] ); 
  Serial.print("RIGHT: ");Serial.println( Joystick[3]); 
  Serial.print("FIRE: ");Serial.println(Joystick[4]); 
   
  Serial.println("");
  
  delay(300);                  
}
