// ***********************************
//  EGN-02       Autonomous Toy-Car
//  Author:      Paulo Grego
//  Last Update: 14/05/2017
// ***********************************

// Libraries
#include <stdio.h>
#include <string.h>
#include <NewPing.h>

// Constants
#define LOW          0
#define HIGH         1
#define ECHO_PIN     11
#define TRIGGER_PIN  12
#define MAX_DISTANCE 200

// Program Start!

void setup(){

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

}

void loop(){


}
