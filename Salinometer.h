#ifndef Salinometer_h
#define Salinometer_h

#include "Arduino.h"

class Salinometer {
  public:
    Salinometer();
    Salinometer(uint8_t pin);
    Salinometer(uint8_t pin, uint16_t lower_limit, uint16_t upper_limit);
    void init(uint8_t pin);
    void init(uint8_t pin, uint16_t lower_limit, uint16_t upper_limit);
    uint16_t get_value();
    bool is_in_tolerance();
    void set_limits(uint16_t lower_limit, uint16_t upper_limit);
  private:
    uint8_t _pin;
    uint16_t _lower_limit, _upper_limit;
    bool _init, _limits;
};

#endif
