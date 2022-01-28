class Room {
    private:
        float 
            temperature, // Temperature in the room
            targetTemp, // Target temperature in the room
            factor; // Susceptibility of the room to cooling/heating - 1 is default, +- 0.25 = ~ 1.5 C-deg / >1 - faster
    public:
        Room(void);
        ~Room(void);
        float getTemp(void);
        float getTargetTemp(void);
        void setTargetTemp(float target);
        void outsideImpact(float outsideTemp);
};