#pragma once
#include "./Room.h"
class HeatingSystem {
    public:
        float 
            targetTemperature,
            tolerance;
        HeatingSystem();
        HeatingSystem(float target, float tol);
        ~HeatingSystem();
        enum HeatLevel{};
        float getTemperature(Room & room);
        void heatRoomBy(Room & room, float temperature);
        float getTargetTemperature(Room & room);
        void setTargetTemperature(Room & room, float targetTemp);
};