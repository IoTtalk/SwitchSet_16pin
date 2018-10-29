#include <Bridge.h>

void setup() {
    pinMode(13,OUTPUT);
    for(int i=2;i<=12;i++){
        pinMode(i,OUTPUT);
        digitalWrite(i, HIGH);            
    }
    for(int i=18;i<=22;i++){
        pinMode(i,OUTPUT);
        digitalWrite(i, HIGH);            
    }    
    Bridge.begin();   // Pins 0 and 1 should be avoided as they are used by the Bridge library.
    //Serial.begin(115200);
}

void loop() {
    char pin13[2];
    char StrBuf[11];
    char valueStr[21];
    int  valueInt;

    Bridge.get("Reg_done",  pin13, 2);
    digitalWrite(13, atoi(pin13));    

    String StringTemp = "";
    for(int i=1; i<=16; i++){
        StringTemp = "Switch-O" + String(i);
        StringTemp.toCharArray(StrBuf, StringTemp.length()+1);
        Bridge.get(StrBuf,  valueStr, 3);
        if (strcmp(valueStr,"") != 0){
            valueInt = atoi(valueStr);                  
            //Serial.print(StrBuf); Serial.print(": "); Serial.println(valueStr);
            if (valueInt > 0) valueInt=0; else valueInt=1;  // on/off reverse
            if (i<=11) digitalWrite(i+1, valueInt); else digitalWrite(i+6, valueInt);        
            Bridge.put(StrBuf, "");
        }
    }
}
