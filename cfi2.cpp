#include<iostream>
#include<cmath>
using namespace std;
class CelistialBodies{
public:
float radius;
float mass;
float density;
};
class Star : public CelistialBodies{
public:
float luminosity;
float surfaceTemperature;
};
class Planet :public CelistialBodies{
public:
float orbitalRadius;
int Moons;
float OrbitalVelocity(float mass,float orbitalRadius)
{
    float v;
    const double G= 6.67430e-11;
    v=sqrt(G * mass/orbitalRadius);
    return v;
}
};
int main()
{
    Planet Earth;
    cin>>Earth.orbitalRadius;
    cin>>Earth.mass;
    cout<<Earth.OrbitalVelocity(mass, orbitalRadius)
    return 0;
}