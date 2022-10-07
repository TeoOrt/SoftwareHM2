#include  <iostream>



class Time{
    private:
    time_t my_time;
    std::string TimeZone;
    public:
    Time(std::string Zone){
        my_time = time(NULL);
        TimeZone = Zone;
    }
    
    void SetTimeZone ( std::string Zones){
        TimeZone = Zones;
    }
    std::string GetTimeZone(){
        return TimeZone;
    }


};
