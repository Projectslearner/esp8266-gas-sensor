/*
    Project name : ESP8266 GAS Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-gas-sensor
*/

#define GAS_SENSOR_PIN D5  // GPIO14

void setup() 
{
    Serial.begin(115200);
    pinMode(GAS_SENSOR_PIN, INPUT);
}

void loop() 
{
    int sensorValue = digitalRead(GAS_SENSOR_PIN);

    if (sensorValue == HIGH)
    {
        Serial.println("Gas detected!");
    } 
    else 
    {
        Serial.println("No gas detected.");
    }

    delay(500);
}
