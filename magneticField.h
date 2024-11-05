#ifndef MAGNETICFIELD_H
#define MAGNETICFIELD_H

#include <cmath>

class Magnetic_Field
{
    private:
    double *M;

    public:

    //functions to be implemented
    Magnetic_Field();
    Magnetic_Field(double x, double y, double z);
    ~Magnetic_Field();

    //find the magnitude again for vector calculation
    double calculate_magnitude() const;
    //function to calculate the vector of the magnetic field
    double* calculate_vector() const;

    //getters and setters
    void setM(double x, double y, double z);
    double getx() const;
    double gety() const;
    double getz() const;
};


#endif