#include <Servo.h>

Servo servo;

void setup()
{
    servo.attach(5); // 5 == GPIO1
}

void loop()
{
    while (true)
    {
        servo.write(0);
    }
}
