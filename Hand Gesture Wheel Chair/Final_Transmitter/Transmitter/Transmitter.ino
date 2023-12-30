#include <VirtualWire.h>

#define x A0
#define y A1
#define z A2

char *data;

int x_val;
int y_val;
int z_val;

void setup() {
  //vw_set_ptt_inverted(true);
  vw_set_tx_pin(12);
  vw_setup(2000);
  // put your setup code here, to run once:
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  pinMode(z, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  x_val = analogRead(x);
  y_val = analogRead(y);
  z_val = analogRead(z);

  /*Serial.print("X: ");
  Serial.println(x_val);
  Serial.print("Y: ");
  Serial.println(y_val);
  Serial.print("Z: ");
  Serial.println(z_val);
  Serial.println();
  Serial.println("---------------------------------");
  Serial.println();
  delay(100);*/
  if(y_val>350)
  {
    
    data="f";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(100);
    Serial.println("Forward");
  }
  else if(y_val<300)
  {
    data="b";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(100);
    Serial.println("Backward");
  }
  else if(x_val>350)
  {
    data="r";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(100);
    Serial.println("Right");
  }
  else if(x_val<310)
  {
    data="l";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(100);
    Serial.println("Left");
  }
  else if(320<=x_val<350 && 320<=y_val<=350 && 380<=z_val<=410)
  {
    data="s";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(100);
    Serial.println("Stop");
  }

}
