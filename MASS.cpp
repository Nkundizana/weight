#include <iostream>
using namespace std;
float calculateWeight(float mass) {
    float weight = mass * 9.8;  // Weight formula: W = M * 9.8
    return weight;
}

int main() {
    float mass;
    
    
    cout << "Enter the mass of the object (in kg): ";
    cin >> mass;
    
    float weight = calculateWeight(mass);
    cout << "The weight of the object is: " << weight << " N" << endl;
    
    return 0;
}

