/**
* @file Touch_LED_Control.ino
 * @author Ashish Kumar Yadav
 * @date 2026-02-20
 * @version 1.0
 *
 * @brief Controls an LED using a touch sensor.
 *
 * @details
 * This program reads the digital output from a touch sensor
 * connected to pin 5. When the sensor is touched (HIGH signal),
 * the LED connected to pin 13 turns ON.
 * Otherwise, the LED remains OFF.
 *
 * Connections:
 * - Touch Sensor OUT → Digital Pin 5
 * - LED → Digital Pin 13
 *
 * @note
 * Some touch modules output HIGH when touched and LOW otherwise.
 *
 * @warning
 * Ensure proper wiring to avoid false triggering.
 */

#include <Arduino.h>

/** @brief Digital pin connected to touch sensor */
#define TOUCH_PIN 5

/** @brief Digital pin connected to LED */
#define LED_PIN 13


/**
 * @brief Initializes sensor and LED pins along with serial communication.
 */
void setup()
{
    pinMode(TOUCH_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}


/**
 * @brief Main loop function.
 *
 * @details
 * Reads touch sensor state and controls LED accordingly.
 */
void loop()
{
    int state = digitalRead(TOUCH_PIN);  ///< Read touch sensor state

    if (state == HIGH)
    {
        digitalWrite(LED_PIN, HIGH);
        Serial.println("ToUcH");
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
        Serial.println("UnToUcHeD");
    }
}
