//========== Motor 1 ==========
const int ENA = 5;
const int IN1 = 2;
const int IN2 = 4;

//========== Motor 2 ==========
const int ENB = 3;
const int IN3 = 1;
const int IN4 = 0;

//========== Motor 3 ==========
const int ENC = 6;
const int IN5 = 7;
const int IN6 = 8;

//========== Motor 4 ==========
const int END = 9;
const int IN7 = 11;
const int IN8 = 10;

void setup()
{
    pinMode(ENA, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);

    pinMode(ENB, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    pinMode(ENC, OUTPUT);
    pinMode(IN5, OUTPUT);
    pinMode(IN6, OUTPUT);

    pinMode(END, OUTPUT);
    pinMode(IN7, OUTPUT);
    pinMode(IN8, OUTPUT);

    analogWrite(ENA, 255);
    analogWrite(ENB, 255);
    analogWrite(ENC, 255);
    analogWrite(END, 255);
}

void loop()
{
    //================ للأمام =================
    forward();
    delay(30000);

    //================ للخلف =================
    backward();
    delay(60000);

    //================ يمين ويسار بالتناوب =================
    for (int i = 0; i < 6; i++)   // 6 مرات × 10 ثوان = دقيقة
    {
        right();
        delay(5000);

        left();
        delay(5000);
    }
}

//================ Functions =================

void forward()
{
    digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);
    digitalWrite(IN5, HIGH); digitalWrite(IN6, LOW);
    digitalWrite(IN7, HIGH); digitalWrite(IN8, LOW);
}

void backward()
{
    digitalWrite(IN1, LOW); digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW); digitalWrite(IN4, HIGH);
    digitalWrite(IN5, LOW); digitalWrite(IN6, HIGH);
    digitalWrite(IN7, LOW); digitalWrite(IN8, HIGH);
}

void right()
{
    // اليسار للأمام
    digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);

    // اليمين للخلف
    digitalWrite(IN5, LOW); digitalWrite(IN6, HIGH);
    digitalWrite(IN7, LOW); digitalWrite(IN8, HIGH);
}

void left()
{
    // اليسار للخلف
    digitalWrite(IN1, LOW); digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW); digitalWrite(IN4, HIGH);

    // اليمين للأمام
    digitalWrite(IN5, HIGH); digitalWrite(IN6, LOW);
    digitalWrite(IN7, HIGH); digitalWrite(IN8, LOW);
}