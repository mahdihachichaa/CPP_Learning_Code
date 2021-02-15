#pragma once

#include <iostream>

class Driver
{
    public:
        void pass_car_licence_exam()
        {
            _has_car_licence = true; 
        }

        bool has_car_licence() const
        {
            return _has_car_licence;
        }

        void pass_air_licence_exam()
        {
            _has_air_licence = true; 
        }

        bool has_air_licence() const
        {
            return _has_air_licence;
        }

    private:
        bool _has_car_licence = false;
        bool _has_air_licence = false;
};

class Vehicle
{
public:
    Vehicle(const Driver& driver)
        : _driver { driver }
    {}

    virtual ~Vehicle() {}

    virtual unsigned int drive() const
    {
        std::cerr << "Not implemented" << std::endl;
        return 0u;
    }

protected:
    const Driver& _driver;
};
