int greenLED = D4;
int blueLED = D3;
int redLED = D2;

bool green;
bool red;
bool blue;
void setup() 
{
    green = true;
    red = true;
    blue = true;
	pinMode(greenLED, OUTPUT);
    pinMode(blueLED, OUTPUT);
    pinMode(redLED, OUTPUT);
    Particle.function("LEDToggle", LEDToggle);
}

void loop()
{
    
}

int LEDToggle(String command) {
    if(command == "green")
    {
        if(green)
        {
            LEDControl(greenLED, true);
            green = false;
        }
        else
        {
            LEDControl(greenLED, false);
            green = true;
        }
        return 1;
    }
    else if(command == "red")
    {
        if(red)
        {
            LEDControl(redLED, true);
            red = false;
        }
        else
        {
            LEDControl(redLED, false);
            red = true;
        }
        return 1;
    }
    else if(command == "blue")
    {
        if(blue)
        {
            LEDControl(blueLED, true);
            blue = false;
        }
        else
        {
            LEDControl(blueLED, false);
            blue = true;
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

void LEDControl(int light, bool Switch)
{
    if(Switch)
    {
        digitalWrite(light, HIGH);
    	digitalWrite(light, HIGH);
    }
    else
    {
        digitalWrite(light, LOW);
    	digitalWrite(light, LOW);
    }
}