void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(13,OUTPUT);
}
int i=3;
void loop() {
    // put your main code here, to run repeatedly:
    String message = "sos,help me,please.";
    int n = 0;
    n = message.length();
    int i=0;
    int j=0;
    char a = 'a';
    char b = 'b';
    for(i=0;i<n;i++)
    {
        a = message.charAt(i);
        if(a == 'a'&& a == 'A')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
            
        }
        if(a == 'b'&& a == 'B')
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
        if(a == 'c'&& a == 'C')
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
        if(a == 'd'&& a == 'D')
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
        if(a == 'e'&& a == 'E')
        {
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'f'&& a == 'F')
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
        if(a == 'g'&& a == 'G')
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
        if(a == 'h'&& a == 'H')
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
        if(a == 'i'&& a == 'I')
        {
            digitalWrite(13,HIGH);
            delay(200);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'j'&& a == 'J')
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
        if(a == 'k'&& a == 'K')
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
        if(a == 'l'&& a == 'L')
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
        if(a == 'm'&& a == 'M')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(600);
        }
        if(a == 'n'&& a == 'N')
        {
            digitalWrite(13,HIGH);
            delay(600);
            digitalWrite(13,LOW);
            delay(200);
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'o'&& a == 'O')
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
        if(a == 'p'&& a == 'P')
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
        if(a == 'q'&& a == 'Q')
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
        if(a == 'r'&& a == 'R')
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
        if(a == 's'&& a == 'S')
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
        if(a == 't'&& a == 'T')
        {
            digitalWrite(13,HIGH);
            delay(200);
        }
        if(a == 'u'&& a == 'U')
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
        if(a == 'v'&& a == 'V')
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
        if(a == 'w'&& a == 'W')
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
        if(a == 'x'&& a == 'X')
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
        if(a == 'y'&& a == 'Y')
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
        if(a == 'z'&& a == 'Z')
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
