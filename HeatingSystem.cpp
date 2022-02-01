#include "./HeatingSystem.h"

HeatingSystem::HeatingSystem() {
    targetTemperature = 22.;
    tolerance = 3.;
}
HeatingSystem::HeatingSystem(float target, float tol) {
    targetTemperature = target;
    tolerance = tol;
}
HeatingSystem::~HeatingSystem() {}

enum heatLevel {
            LOW = 1,
            MEDIUM = 2,
            HIGH = 3
        };
float HeatingSystem::getTemperature(Room & room) {
    return room.getTemp();
}
void HeatingSystem::heatRoomBy(Room & room, float temperature) {
    room.setTemp(room.getTemp() + temperature);
}
float HeatingSystem::getTargetTemperature(Room & room){
    return room.getTargetTemp();
}
void HeatingSystem::setTargetTemperature(Room & room, float targetTemp) {
    room.setTargetTemp(targetTemp);
}