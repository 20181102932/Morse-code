void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(13,OUTPUT);
}
int i=3;
void loop() {
    // put your main code here, to run repeatedly:
    String message = "b";
    int n = 0;
    n = message.length();
    int i=0;
    int j=0;
    char a = 'a';
    char b = 'b';
    for(i=0;i<n;i++)
    {
        a = message.charAt(i);
        if(a == 'a')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            
        }
        if(a == 'b')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'c')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'd')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'e')
        {
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'f')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'g')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'h')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'i')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'j')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'k')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'l')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'm')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'n')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'o')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'p')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'q')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'r')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 's')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 't')
        {
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'u')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'v')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'w')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'x')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'y')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'z')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == '0')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == '1')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == '2')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == '3')
            digitalWrite(13,HIGH);
        delay(200);
        digitalWrite(13,LOW);
        delay(200);
        digitalWrite(13,HIGH);
        delay(200);
        digitalWrite(13,LOW);
        delay(200);
        digitalWrite(13,HIGH);
        delay(200);
        digitalWrite(13,LOW);
        delay(200);
        digitalWrite(13,HIGH);
        delay(600);
        digitalWrite(13,LOW);
        delay(200);
        digitalWrite(13,HIGH);
        delay(600);
        if(a == '4')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == '5')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == '6')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == '7')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == '8')
            digitalWrite(13,HIGH);
        delay(600);
        digitalWrite(13,LOW);
        delay(200);
        digitalWrite(13,HIGH);
        delay(600);
        digitalWrite(13,LOW);
        delay(200);
        digitalWrite(13,HIGH);
        delay(600);
        digitalWrite(13,LOW);
        delay(200);
        digitalWrite(13,HIGH);
        delay(200);
        digitalWrite(13,LOW);
        delay(200);
        digitalWrite(13,HIGH);
        delay(200);
        if(a == '9')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == ' ')
        {
            digitalWrite(13,LOW);
            delay(1400);
        }
        j=i+1;
        b=message.charAt(j);
        if(b!=' '&&b!='\n')
        {
            digitalWrite(13,LOW);
            delay(600);
        }
    }
}
