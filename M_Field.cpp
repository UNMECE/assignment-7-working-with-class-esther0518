#include <iostream>
#include "magneticField.h"

//default constructor, inizalize the array members with the same components as elctric field(?)
Magnetic_Field::Magnetic_Field(){
    M = new double [3];
    M[0] = 0.0;
    M[1] = 0.0;
    M[2] = 0.0;
}

//set array members values the variables
Magnetic_Field::Magnetic_Field(double x, double y, double z){
    M = new double[3];
    M[0] = x;
    M[1] = y;
    M[2] = z;
}

//destructor to free the memory
Magnetic_Field::~Magnetic_Field(){
    delete[] M;
}

//find the magnitude again
double Magnetic_Field::calculate_magnitude() const{
    return sqrt(M[0]*M[0] + M[1]*M[1] + M[2]*M[2]);

}

//find the unit vector
double* Magnetic_Field::calculate_vector() const{
    double magnitude = calculate_magnitude();
    double* unit_vector = new double[3];

    if(magnitude != 0){
        unit_vector[0] = M[0] / magnitude;
        unit_vector[1] = M[1] / magnitude;
        unit_vector[2] = M[2] / magnitude;
    }else{
        unit_vector[0] = 0;
        unit_vector[1] = 0;
        unit_vector[2] = 0;
    }

    return unit_vector;
}

//set the the members to the respective variables
void Magnetic_Field::setM(double x, double y, double z){
    M[0] = x;
    M[1] = y;
    M[2] = z;
}

//whatever it is that getters are supposed to do is going to happen here i hope
double Magnetic_Field::getx()const{
    return M[0];
}
double Magnetic_Field::gety()const{
    return M[1];
}
double Magnetic_Field::getz()const{
    return M[2];
}
