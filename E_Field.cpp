#include <iostream>
#include "electricField.h"

//default constructor to allocate memory and initialize the array members to the given component values
Electric_Field::Electric_Field(){
    E = new double[3];
    E[0] = 0.0;
    E[1] = 0.0;
    E[2] = 0.0;
}

//set the array members with their respective variables
Electric_Field::Electric_Field(double x, double y, double z){
    E = new double[3];
    E[0] = x;
    E[1] = y;
    E[2] = z;
}

//destructor to free the memory
Electric_Field::~Electric_Field(){
    delete[] E;
}

//find the inner product
double Electric_Field::inner_product() const{
    return E[0]*E[0] + E[1]*E[1] + E[2]*E[2];
}

//calculate the the magnitude of the electric field
double Electric_Field::calculate_magnitude() const{
    return sqrt(E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
}

//set the the members to the respective variables
void Electric_Field::setE(double x, double y, double z){
    E[0] = x;
    E[1] = y;
    E[2] = z;
}

//whatever it is that getters are supposed to do is going to happen here i hope
double Electric_Field::getx() const{
    return E[0];
}
double Electric_Field::gety() const{
    return E[1];
}
double Electric_Field::getz() const{
    return E[2];
}
