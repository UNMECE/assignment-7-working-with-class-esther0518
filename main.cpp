#include <iostream>
#include "electricField.h"
#include "magneticField.h"

using namespace std;

int main(){
    //assign the components to the electric field
    Electric_Field E_default;
    Electric_Field E_components (1e5, 10.9, 1.7e2);

    cout << "Electric Feild:" << endl;

    //display the inner product of the default and components of the elctric field
    cout << "Inner Product:" << std::endl;
    cout << "Default- " << E_default.inner_product() << endl;
    cout << "Components- " << E_components.inner_product() << endl;

    //display the magnitude of the default and components of the elctric field
    cout << "Magnitude:" << std::endl;
    cout << "Default- " << E_default.calculate_magnitude() << endl;
    cout << "Components- " << E_components.calculate_magnitude() << endl;

    //do the same with the magnetic field only with the magnitude and unit vector
    Magnetic_Field M_default;
    Magnetic_Field M_components (1e5, 10.9, 1.7e2);

    double* unitVector_D = M_default.calculate_vector();
    double* unitVector_C = M_components.calculate_vector(); 

    cout << endl;
    cout << "Magnetic Field:" << endl;

    //display the magnitude of the default and components of the magnetic field
    cout << "Magnitude:" << endl;
    cout << "Default- " << M_default.calculate_magnitude() << endl;
    cout << "Components- " << M_components.calculate_magnitude() << endl;

    //display the unit vector of the default and components of the magnetic field
    cout << "Unit Vector:" << endl;
    cout << "Default- " << "(" << unitVector_D[0] << ", " << unitVector_D[1] << ", " << unitVector_D[2] << ")" << endl;
    cout << "Components- " << "(" << unitVector_C[0] << ", " << unitVector_C[1] << ", " << unitVector_C[2] << ")" << endl;

    //free memory
    delete[] unitVector_C;
    delete[] unitVector_D;
    
    return 0;
}