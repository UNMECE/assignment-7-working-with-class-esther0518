#ifndef ELECTRICFIELD_H
#define ELECTRICFIELD_H

#include <cmath>

class Electric_Field{
  private:
  double *E;

  public:
  //functions to be implemented

  //constructors and destructor for allocated memory
  Electric_Field();
  Electric_Field(double x, double y, double z);
  ~Electric_Field();

  //functions to calcualte the magnitude of the electric field
  double calculate_magnitude() const;
  double inner_product() const;

  //getters and setters (idk what their for tho ngl)
  void setE(double x, double y, double z);
  double getx() const;
  double gety() const;
  double getz() const;

};

#endif
