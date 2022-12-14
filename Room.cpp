#include "./Room.h"

const std::string defS = "unknown_room";
const float defT = 15., defTT = 22., defF = 1;

Room::Room() { 
    temperature = defT;
    targetTemp = defTT;
    factor = defF;
    name = defS;
}
Room::Room(std::string s) { 
    temperature = defT;
    targetTemp = defTT;
    factor = defF;
    name = s;
}
Room::Room(std::string s, float f) { 
    temperature = defT;
    targetTemp = defTT;
    factor = f;
    name = s;
}
Room::Room(std::string s, float f, float tt) { 
    temperature = defT;
    targetTemp = tt;
    factor = f;
    name = s;
}
Room::Room(std::string s, float f, float tt, float t) { 
    temperature = t;
    targetTemp = tt;
    factor = f;
    name = s;
}
Room::~Room(void) {}

float Room::getTemp(void) {
    return temperature;
}
float Room::getTargetTemp(void) { 
    return targetTemp; 
}
void Room::setTemp(float temp){
    this->temperature = temp;
}
void Room::setTargetTemp(float target) { 
    targetTemp = target; 
}
void Room::outsideImpact(float outsideTemp) {
    float trendValue = (fabs(temperature - outsideTemp) / 100 * factor);
    if(temperature > outsideTemp)
        temperature -= trendValue;
    else 
        temperature += trendValue;
}
