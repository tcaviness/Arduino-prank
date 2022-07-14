#include <Mouse.h>
#include <Keyboard.h>



void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    int inByte = Serial.read();
     
      switch (inByte) {
      case '0':
        //ping
         Keyboard.begin();
         Mouse.begin();
        Serial.println("OK,0");
         delay(2);
         Keyboard.press(0x80); //Ctrl
         Keyboard.press(0xB1); //Esc
         delay(6);
         Keyboard.releaseAll();
         Keyboard.print("ping www.chicotirrigation.com -t"); 
         delay(6);
         Keyboard.press(0xB0);//Enter
         delay(6);
         Keyboard.releaseAll();
         delay(10000);
         Keyboard.press(0x80); //Ctrl
         Keyboard.press(0x63); //C
         delay(6);
         Keyboard.releaseAll(); 
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
        
      case '1':
         //notepad open
         Keyboard.begin();
         Mouse.begin();
         Serial.println("OK,1");
          delay(2);
         Keyboard.press(0x80); // Ctrl
         Keyboard.press(0xB1); // Esc
         delay(6);
         Keyboard.releaseAll();
         Keyboard.print("notepad"); 
         Keyboard.press(0xB0); //Enter
         delay(200); 
         Keyboard.releaseAll();
         delay(1000); 
         Keyboard.println("Hello Just to let you know I have control of your computer!");
         delay(500); 
         Keyboard.press(0xB0); 
         delay(6); 
         Keyboard.releaseAll(); 
         Keyboard.println("I see you watching movies. ;-)");
         delay(2900);
         Keyboard.press(0x82); //ALT
         Keyboard.press(0x66); //f
         Keyboard.press(0x78); //x
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x82); //ALT
         Keyboard.press(0x6E); // n
         delay(6);
         Keyboard.releaseAll();
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
       
      case '2':
        // mouse move
        Keyboard.begin();
         Mouse.begin();
          Serial.println("OK,2");
          delay(2);
         Mouse.move(240,40);
         delay(6); 
         Mouse.move(125,440);
         delay(6);
          Mouse.move(125,440);
         delay(10);
          Mouse.move(10,1000);
         delay(5);
          Mouse.move(0,-500);
         delay(3);
          Mouse.move(80,540);
         delay(1000);
          Mouse.move(1000,0);
         delay(1);
         Mouse.move(0,0); 
         delay(1000);
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
     
      case '3':
         //minimize windows and maximize window
         Keyboard.begin();
         Mouse.begin();
          Serial.println("OK,3");
          delay(2);
         Keyboard.press(0x83); //Windows KEY
         Keyboard.press(0x64); //d
         delay(6);
         Keyboard.releaseAll();
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
        
      case '4':
        // open chrome and make tabs 
         Keyboard.begin();
         Mouse.begin();
          Serial.println("OK,4");
          delay(2);
         Keyboard.press(0x80);
         Keyboard.press(0xB1);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.print("chrome");
         delay(10);
         Keyboard.press(0xB0);
         Keyboard.releaseAll();
         delay(1000);
            Keyboard.press(0x80);
            Keyboard.press(0x74); //t
            delay(10);
            Keyboard.releaseAll();
           delay(100);
           Keyboard.press(0x80);
            Keyboard.press(0x74); //t
            delay(10);
            Keyboard.releaseAll();
           delay(100);
           Keyboard.press(0x80);
            Keyboard.press(0x74); //t
            delay(10);
            Keyboard.releaseAll();
           delay(100);
           Keyboard.press(0x80);
            Keyboard.press(0x74); //t
            delay(10);
            Keyboard.releaseAll();
           delay(2000);
          //close tabs
             Keyboard.press(0x80);
            Keyboard.press(0x77); //w
            delay(10);
            Keyboard.releaseAll();
            delay(100);
               Keyboard.press(0x80);
            Keyboard.press(0x77); //w
            delay(10);
            Keyboard.releaseAll();
            delay(100);
            Keyboard.press(0x80);
            Keyboard.press(0x77); //w
            delay(10);
            Keyboard.releaseAll();
            delay(100);   
            Keyboard.press(0x80);
            Keyboard.press(0x77); //w
            delay(10);
            Keyboard.releaseAll();
            delay(100);
               Keyboard.press(0x80);
            Keyboard.press(0x77); //w
            delay(10);
            Keyboard.releaseAll();
            delay(100);   
            Keyboard.press(0x80);
            Keyboard.press(0x77); //w
            delay(10);
            Keyboard.releaseAll();
            delay(100);
           
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
      
      case '5':
        //Open Chrome and make new windows close them with Alt(0x86)+ F4(0xC5)
        Keyboard.begin();
         Mouse.begin();
          Serial.println(OK,5);
          delay(2);
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Keyboard.press(0x80);
         Keyboard.press(0x6E);
         delay(6);
         Keyboard.releaseAll();
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
         /* 
      case '6':
         // switch open programs  Alt+Tab
         Keyboard.begin();
         Mouse.begin();
          Serial.println(OK,6);
          delay(2);
         Keyboard.press(0x80);
         Keyboard.press(0xB1);
         delay(6);
         Keyboard.releaseAll();
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
        
      case '7':
        //open msinfo32 then close it
         Keyboard.begin();
         Mouse.begin();
          Serial.println(OK,7);
          delay(2);
         Keyboard.press(0x80);
         Keyboard.press(0xB1);
         delay(6);
         Keyboard.releaseAll();
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
        
      case '8':
        // Open calc (calculator) press radom keys the close it. 
        Keyboard.begin();
         Mouse.begin();
          Serial.println(OK,8);
          delay(2);
         Keyboard.press(0x80);
         Keyboard.press(0xB1);
         delay(6);
         Keyboard.releaseAll();
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
        
      case '9':
        
         Keyboard.begin();
         Mouse.begin();
          Serial.println(OK,9);
          delay(2);
         Keyboard.press(0x80);
         Keyboard.press(0xB1);
         delay(6);
         Keyboard.releaseAll();
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
        
      case 'a':
       //Clean computer
       
         Keyboard.begin();
         Mouse.begin();
         Serial.println(OK,10);
         
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
      case 'b':
         //Disk Defragment
         
         Keyboard.begin();
         Mouse.begin();
         Serial.println(OK,11);
         
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
     case 'c':
         Keyboard.begin();
         Mouse.begin();
         Serial.println(OK,12);
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
     case 'd':
         Keyboard.begin();
         Mouse.begin();
         Serial.println(OK,13);
         
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
     case 'e':
         Keyboard.begin();
         Mouse.begin();
         Serial.println(OK,14);
         
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
     case 'f':
         Keyboard.begin();
         Mouse.begin();
         Serial.println(OK,14);
         
         Mouse.end();
         Keyboard.end();
         Serial.println("END");
        break;
        */
    
   }
  }
}




