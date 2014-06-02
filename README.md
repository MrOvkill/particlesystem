Trillek Particle System Module
=============================
Version 0.0.1<br />
This is a particle physics system.<br />
Ir provides all the basics for particles, as well as a "SimpleParticleEngine" class for basic effects.<br />
Instructions:<br />
clone the repository, then do this:<br />
```
mkdir build
cd build
cmake ..
make
```
<br />
Example usage:<br />
```CXX
/*
    Warning: PSEUDO-CODE.  Only what's directly related to my API works here.
*/
#include "Particle.hpp"
#include "SimpleParticleEngine.hpp"
#include "Util.hpp"

#define PARTICLES_SIZE 1500

using namespace trillek;

int main(void) {
    // Seed our random generator
    util::Util::Seed();
    
    // Create our particle engine
    particle::SimpleParticleEngine engine;
    
    engine.Init(PARTICLE_SIZE, 0, 0, -500);
    
    // All of these are relative to where you placed it.
    /*
        This configuration will make a circular spawning radius of 25
    */
    engine.gravY = 0.0f;
    
    engine.sizeXMin = -100f;
    engine.sizeXMax = 100f;
    engine.sizeYMin = 0f;
    engine.sizeYMax = 0f;
    engine.sizeZMin = -100f;
    engine.sizeZMax = 100f;
    
    engine.startXMin = -25f;
    engine.startXMax = 25f;
    engine.startYMin = -25f;
    engine.startYMax = 25f;
    engine.startZMin = -25f;
    engine.startZMax = 25f;
    
    // Update the particles to work with our new rules
    engine.Update();
    
    while(1) {
        /* Do other rendering stuff */
        engine.Update();
        for(int i = 0; i < PARTICLES_SIZE; i++) {
            /* draw(engine.particles[i]); */
        }
        /* Do yet more rendering stuff and key detection, etc... */
    }
}
