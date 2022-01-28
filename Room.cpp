#include "Room.h"
#include <iostream>
#include <cmath>

Room::Room(void) { 
    temperature = 15.;
    targetTemp = 22.;
    factor = 1;
}
Room::~Room(void) {}

float Room::getTemp(void) {
    return temperature;
}
float Room::getTargetTemp(void) { 
    return targetTemp; 
}
void Room::setTargetTemp(float target) { 
    targetTemp = target; 
}
void Room::outsideImpact(float outsideTemp) {
    float trendValue = (abs(temperature - outsideTemp) / 100 * factor);
    if(temperature > outsideTemp)
        temperature -= trendValue;
    else 
        temperature += trendValue;
}
