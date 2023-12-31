// variables
int RED = 2;
int YELLOW = 3;
int GREEN = 4;
int DELAY_RED = 5000;
int DELAY_YELLOW = 2000;
int DELAY_GREEN = 5000;


// basic functions
void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop()
{
  red_light();
  delay(DELAY_RED);
  yellow_light();
  delay(DELAY_YELLOW);
  green_light();
  delay(DELAY_GREEN);
}

void red_light()
{
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
}

void yellow_light()
{
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(GREEN, LOW);
}

void green_light()
{
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
}
