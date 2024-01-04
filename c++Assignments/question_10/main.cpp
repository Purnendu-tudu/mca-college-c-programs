#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

// Function to calculate the volume of a cube
double calculateVolume(double side) {
    return pow(side, 3);
}

// Function to calculate the volume of a cuboid
double calculateVolume(double length, double width, double height) {
    return length * width * height;
}

// Function to calculate the volume of a cone
double calculateVolume(double radius, double height, char shape) {
    return (shape == 'C' || shape == 'c') ? (1.0 / 3) * PI * pow(radius, 2) * height : -1;
}

// Function to calculate the volume of a cylinder
double calculateVolume(double radius, double height, char shape, bool isCylinder) {
    return (isCylinder && (shape == 'C' || shape == 'c')) ? PI * pow(radius, 2) * height : -1;
}

// Function to calculate the volume of a sphere
double calculateVolume(double radius, char shape) {
    return (shape == 'S' || shape == 's') ? (4.0 / 3) * PI * pow(radius, 3) : -1;
}

int main() {
    int choice;
    cout << "Menu:\n";
    cout << "1. Cube\n";
    cout << "2. Cuboid\n";
    cout << "3. Cone\n";
    cout << "4. Cylinder\n";
    cout << "5. Sphere\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double side;
            cout << "Enter side length of the cube: ";
            cin >> side;
            cout << "Volume of the cube: " << calculateVolume(side) << endl;
            break;
        }
        case 2: {
            double length, width, height;
            cout << "Enter length, width, and height of the cuboid: ";
            cin >> length >> width >> height;
            cout << "Volume of the cuboid: " << calculateVolume(length, width, height) << endl;
            break;
        }
        case 3: {
            double radius, height;
            char shape;
            cout << "Enter radius and height of the cone, and 'C' for cone: ";
            cin >> radius >> height >> shape;
            double volume = calculateVolume(radius, height, shape);
            if (volume != -1) {
                cout << "Volume of the cone: " << volume << endl;
            } else {
                cout << "Invalid choice for cone!" << endl;
            }
            break;
        }
        case 4: {
            double radius, height;
            char shape;
            bool isCylinder;
            cout << "Enter radius and height of the cylinder, 'C' for cylinder, and 1 for cylinder flag: ";
            cin >> radius >> height >> shape >> isCylinder;
            double volume = calculateVolume(radius, height, shape, isCylinder);
            if (volume != -1) {
                cout << "Volume of the cylinder: " << volume << endl;
            } else {
                cout << "Invalid choice for cylinder!" << endl;
            }
            break;
        }
        case 5: {
            double radius;
            char shape;
            cout << "Enter radius of the sphere and 'S' for sphere: ";
            cin >> radius >> shape;
            double volume = calculateVolume(radius, shape);
            if (volume != -1) {
                cout << "Volume of the sphere: " << volume << endl;
            } else {
                cout << "Invalid choice for sphere!" << endl;
            }
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
