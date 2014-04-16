Trillek Particle System Module
=============================
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
#include "Particle.hpp"
#include "SimpleParticleEngine.hpp"
#include "Util.hpp"

#define PARTICLES_SIZE 500

using namespace trillek;

map<int, particle::Particle> particles;

int main(void) {
    // Seed our random generator
    util::Util::Seed();
    
    // Create our particle engine
    particle::SimpleParticleEngine engine;
    
    engine.Init(PARTICLE_SIZE, 0, 100, 0);
    
    // All of these are relative to where you placed it.
    /*
        This configuration makes an engine that drops particles from it's Y position
        within 200 of it's X and Z position
        And with a gravity factor of 0.1 ( about what you'd expect from rain )
    */
    engine.gravY = -0.1f;
    engine.sizeXMin = -100f;
    engine.sizeXMax = 100f;
    engine.sizeYMin = 0f;
    engine.sizeYMax = 0f;
    engine.sizeZMin = -100f;
    engine.sizeZMax = 100f;
    
    // Update the particles to work with our new rules
    engine.Update();
    
    while(/* Conditions for rendering */) {
        /* Do other rendering stuff */
        engine.Update();
        particles = engine.getParticles();
        for(int i = 0; i < PARTICLES_SIZE; i++) {
            /* Draw each particle */
        }
        particles = NULL;
        /* Do yet more rendering stuff and key detection, etc... */
    }
}
