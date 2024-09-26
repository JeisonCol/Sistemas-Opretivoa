int LED1_RED    =5;
int LED1_GREEN  =6;
int LED1_BLUE   =7;

int LED2_RED    =8;
int LED2_GREEN  =9;
int LED2_BLUE   =10;

int LED3_RED    =11;
int LED3_GREEN  =12;
int LED3_BLUE   =13;

#define SWITCH 4


void setup(){
    pinMode(LED1_RED, INPUT);
    pinMode(LED1_GREEN, OUTPUT);
    pinMode(LED1_BLUE, OUTPUT);

    pinMode(LED2_RED, OUTPUT);
    pinMode(LED2_GREEN, OUTPUT);
    pinMode(LED2_BLUE, OUTPUT);

    pinMode(LED3_RED, OUTPUT);
    pinMode(LED3_GREEN, OUTPUT);
    pinMode(LED3_BLUE, OUTPUT);
}

void loop(){
  
  int estado = digitalRead(SWITCH);
  
  if(estado==HIGH){
    
    while(digitalRead(SWITCH == HIGH)){
      
      if(digitalRead(SWITCH)==LOW) break;
      
      Serial.print("Validacion Uno");
      	trafic1(); 
        led2_colors(255, 0, 0); 
        led3_colors(255, 0, 0); 
        delay(1000);
      
      if(digitalRead(SWITCH)==LOW) break;
      
      Serial.print("Validacion Dos");
      	trafic2(); 
        led1_colors(255, 0, 0); 
        led3_colors(255, 0, 0); 
        delay(1000);
      
      if(digitalRead(SWITCH)==LOW) break;
      
        Serial.print("Validacion Tres");
      	trafic3(); 
        led1_colors(255, 0, 0); 
        led2_colors(255, 0, 0); 
        delay(1000);
      
      if(digitalRead(SWITCH)==LOW) break;      
    }
  }else{
  	  	Serial.print("Validacion Cuatro");
    	flicker();
  }

}

void led1_colors(int r, int g, int b){
    analogWrite(LED1_RED, r);
    analogWrite(LED1_GREEN, g);
    analogWrite(LED1_BLUE, b);
}

void led2_colors(int r, int g, int b){
    analogWrite(LED2_RED, r);
    analogWrite(LED2_GREEN, g);
    analogWrite(LED2_BLUE, b);
}

void led3_colors(int r, int g, int b){
    analogWrite(LED3_RED, r);
    analogWrite(LED3_GREEN, g);
    analogWrite(LED3_BLUE, b);
}

void trafic1(){
    led1_colors(255,0,0);
    delay(1000);

    led1_colors(255,0,255);
    delay(1000);

    led1_colors(0,0,255);
}

void trafic2(){
    led2_colors(255,0,0);
    delay(1000);

    led2_colors(255,0,255);
    delay(1000);

    led2_colors(0,0,255); 


}

void trafic3(){
    led3_colors(255,0,0); 
    delay(1000);

    led3_colors(255,0,255);
    delay(1000);

    led3_colors(0,0,255); 

}



void flicker(){
  for (int i=0; i<20; i++){
  	    led1_colors(255, 0, 255);
        led2_colors(255, 0, 255);
        led3_colors(255, 0, 255);
        delay(500);
        led1_colors(0, 0, 0);
        led2_colors(0, 0, 0);
        led3_colors(0, 0, 0);
        delay(500);
  }
}
