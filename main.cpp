#include "./Room.h"
#include "./HeatingSystem.h"
#include <iomanip>
using namespace std;

int main(void){

    float
        timer = 0.,
        outsideTemp = 0.;

    Room rooms[] = {
        Room("Living room", 1.25),
        Room("Bedroom", 0.9),
        Room("Bathroom", 0.75),
        Room("Corridor", 1.10),
    };

    do {
        timer += 0.25;
        if( (int) timer == timer )
            cout << endl << "-- " << (int) timer << " hour(s) passed --------------------------------------" << endl; 
        for(int i = 0; i < sizeof(rooms)/sizeof(rooms[0]); i++) {
            rooms[i].outsideImpact(outsideTemp);
            if( (int) timer == timer )
                cout << rooms[i].name << ": " << rooms[i].getTemp() << "\t || ";
        }
    } while (round(rooms[0].getTemp()) != round(outsideTemp));

    return 0;
}