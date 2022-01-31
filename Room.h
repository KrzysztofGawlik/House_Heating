#include <string>
class Room {
    private:
        float 
            temperature, // Temperature in the room
            targetTemp, // Target temperature in the room
            factor; // Susceptibility of the room to cooling/heating - 1 is default, +- 0.25 = ~ 1.5 C-deg / >1 - faster
    public:
        Room(void);
        Room(std::string s);
        Room(std::string s, float f);
        Room(std::string s, float f, float tt);
        Room(std::string s, float f, float tt, float t);
        ~Room(void);
        float getTemp(void);
        void setTemp(float temp);
        float getTargetTemp(void);
        void setTargetTemp(float target);
        void outsideImpact(float outsideTemp);
        std::string name;
};