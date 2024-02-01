int pushbutton = 12;
int redled = 2;
int yellowled = 4;
int greenled = 7;
int button;
int push = 0;
int on = 1000;
int off = 1000;
int time = 250;
void setup()
{
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(pushbutton, INPUT);
}

void loop()
{
  button = digitalRead(pushbutton);
  if(button==HIGH)
  {
    push++;
    if(push==1)
    {
      digitalWrite(redled , HIGH);
    }
    else if(push==2)
    {
      digitalWrite(yellowled , HIGH);
    }
    else if(push==3)
    {
      digitalWrite(greenled , HIGH);
    }
    else if(push==4)
    {
      digitalWrite(yellowled , LOW);
      digitalWrite(redled , LOW);
      digitalWrite(greenled , LOW);
      push = 0;
    }
    delay(time);
  }
}