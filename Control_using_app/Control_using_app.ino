
int ch;

int motor1_dir=3;
int motor1_step=2;

int motor2_dir=5;
int motor2_step=4;

int motor3_dir=7;
int motor3_step=6;

int motor4_dir=9;
int motor4_step=8;

int rpm=10;

int y=10;

void setup()
{
  //initialisations
 Serial.begin(9600);

 pinMode(motor1_dir,OUTPUT);
 pinMode(motor1_step,OUTPUT);

 pinMode(motor2_dir,OUTPUT);
 pinMode(motor2_step,OUTPUT);

 pinMode(motor3_dir,OUTPUT);
 pinMode(motor3_step,OUTPUT);

 pinMode(motor4_dir,OUTPUT);
 pinMode(motor4_step,OUTPUT);
}

void loop(){
  // put your main code here, to run repeatedly:

  if(Serial.available()>0)
  {
    ch=Serial.read();

    if(ch=='0')
    {
      rpm=5;
    }
    else if(ch=='1')
    {
      rpm=7;
    }
    else if(ch=='2')
    {
      rpm=9;
    }
    else if(ch=='3')
    {
      rpm=11;
    }
    else if(ch=='4')
    {
      rpm=12;
    }
    else if (ch=='5')
    {
      rpm=13;
    }
    else if(ch=='6')
    {
      rpm=14;
    }
    else if(ch=='7')
    {
      rpm=15;
    }
    else if(ch=='8')
    {
      rpm=16;
    }
    else if(ch=='9')
    {
      rpm=17;
    }
    else if(ch=='q')
    {
      rpm=18;
    }
    double sp= ((60.0/(rpm*1800))*1000000);
    sp=sp/2;
      
    if(ch=='F')
    {
      Serial.println("Forward");

      digitalWrite(motor1_dir,HIGH);
      digitalWrite(motor2_dir,LOW);
      digitalWrite(motor3_dir,LOW);
      digitalWrite(motor4_dir,HIGH);

      for(int i=0;i<=y;i++)
      {
        digitalWrite(motor1_step,HIGH);
        digitalWrite(motor2_step,HIGH);
        digitalWrite(motor3_step,HIGH);
        digitalWrite(motor4_step,HIGH);
        
        delayMicroseconds(sp);
        
        digitalWrite(motor1_step,LOW);
        digitalWrite(motor2_step,LOW);
        digitalWrite(motor3_step,LOW);
        digitalWrite(motor4_step,LOW);
        
        delayMicroseconds(sp);
      }
      
      
    }
    else if(ch=='B')
    {
      Serial.println("Backward");

      digitalWrite(motor1_dir,LOW);
      digitalWrite(motor2_dir,HIGH);
      digitalWrite(motor3_dir,HIGH);
      digitalWrite(motor4_dir,LOW);

      for(int i=0;i<=y;i++)
      {
        digitalWrite(motor1_step,HIGH);
        digitalWrite(motor2_step,HIGH);
        digitalWrite(motor3_step,HIGH);
        digitalWrite(motor4_step,HIGH);
        
        delayMicroseconds(sp);
        
        digitalWrite(motor1_step,LOW);
        digitalWrite(motor2_step,LOW);
        digitalWrite(motor3_step,LOW);
        digitalWrite(motor4_step,LOW);
        
        delayMicroseconds(sp);
      }
    }
    else if(ch=='L')
    {
      Serial.println("Left"); 

      digitalWrite(motor1_dir,LOW);
      digitalWrite(motor2_dir,LOW);
      digitalWrite(motor3_dir,HIGH);
      digitalWrite(motor4_dir,HIGH);

      for(int i=0;i<=y;i++)
      {
        digitalWrite(motor1_step,HIGH);
        digitalWrite(motor2_step,HIGH);
        digitalWrite(motor3_step,HIGH);
        digitalWrite(motor4_step,HIGH);
        
        delayMicroseconds(sp);
        
        digitalWrite(motor1_step,LOW);
        digitalWrite(motor2_step,LOW);
        digitalWrite(motor3_step,LOW);
        digitalWrite(motor4_step,LOW);
        
        delayMicroseconds(sp);
      }
    }
    else if(ch=='R')
    {
      Serial.println("Right");

      digitalWrite(motor1_dir,HIGH);
      digitalWrite(motor2_dir,HIGH);
      digitalWrite(motor3_dir,LOW);
      digitalWrite(motor4_dir,LOW);

      for(int i=0;i<=y;i++)
      {
        digitalWrite(motor1_step,HIGH);
        digitalWrite(motor2_step,HIGH);
        digitalWrite(motor3_step,HIGH);
        digitalWrite(motor4_step,HIGH);
        
        delayMicroseconds(sp);
        
        digitalWrite(motor1_step,LOW);
        digitalWrite(motor2_step,LOW);
        digitalWrite(motor3_step,LOW);
        digitalWrite(motor4_step,LOW);
        
        delayMicroseconds(sp);
      }
    }
    else if(ch=='S')
    {
      Serial.println("Stop");
        digitalWrite(motor1_step,LOW);
        digitalWrite(motor2_step,LOW);
        digitalWrite(motor3_step,LOW);
        digitalWrite(motor4_step,LOW);
    }


    else if(ch=='G')
    {
      Serial.println("Forward-Left");

      digitalWrite(motor2_dir,LOW);
      digitalWrite(motor4_dir,HIGH);

      for(int i=0;i<=y;i++)
      {
        digitalWrite(motor2_step,HIGH);
        digitalWrite(motor4_step,HIGH);
        
        delayMicroseconds(sp);
        
        digitalWrite(motor2_step,LOW);
        digitalWrite(motor4_step,LOW);
        
        delayMicroseconds(sp);
      }
    }
    else if(ch=='I')
    {
      Serial.println("Forward-Right");

      digitalWrite(motor1_dir,HIGH);
      digitalWrite(motor3_dir,LOW);

      for(int i=0;i<=y;i++)
      {
        digitalWrite(motor1_step,HIGH);
        digitalWrite(motor3_step,HIGH);
        
        delayMicroseconds(sp);
        
        digitalWrite(motor1_step,LOW);
        digitalWrite(motor3_step,LOW);
        
        delayMicroseconds(sp);
      }
    }
    else if(ch=='H')
    {
      Serial.println("Back-Left");

      digitalWrite(motor2_dir,HIGH);
      digitalWrite(motor4_dir,LOW);

      for(int i=0;i<=y;i++)
      {
        digitalWrite(motor2_step,HIGH);
        digitalWrite(motor4_step,HIGH);
        
        delayMicroseconds(sp);
        
        digitalWrite(motor2_step,LOW);
        digitalWrite(motor4_step,LOW);
        
        delayMicroseconds(sp);
      }
    }
    else if(ch=='J')
    {
      Serial.println("Back-Right");

      digitalWrite(motor1_dir,LOW);
      digitalWrite(motor3_dir,HIGH);

      for(int i=0;i<=y;i++)
      {
        digitalWrite(motor1_step,HIGH);
        digitalWrite(motor3_step,HIGH);
        
        delayMicroseconds(sp);
        
        digitalWrite(motor1_step,LOW);
        digitalWrite(motor3_step,LOW);
        
        delayMicroseconds(sp);
      }
    }
    
  }
}
        
    
    
    

    
    
