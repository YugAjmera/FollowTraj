
int ch;

int motor1_dir=3;
int motor1_step=2;

int motor2_dir=5;
int motor2_step=4;

int motor3_dir=7;
int motor3_step=6;

int motor4_dir=9;
int motor4_step=8;

int y=20;
int sp=555;

char* arr = new char [100];
int i=0;

int flag=0;

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

      
      if(ch!='S')
      {
        arr[i] = ch;
      }
      
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

      i++;
      
      if(ch=='X')
      {
        Serial.println("Done Reading.!");
        flag=1; 
      }

      if(flag==1)
      {
        for(int j=i;j>=0;j--)
        {
           
       if(arr[j]=='B')
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
      else if(arr[j]=='F')
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
      else if(arr[j]=='R')
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
      else if(arr[j]=='L')
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
      else if(ch=='H')
      {
        Serial.println("Back-Left");
  
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
      else if(ch=='J')
      {
        Serial.println("Back-Right");
  
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
    }

        Serial.println("Done");
        flag=0;
    }
    
    }

  }

        
    
    
    

    
    
