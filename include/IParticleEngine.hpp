#ifndef IPARTICLEENGINE_H
#define IPARTICLEENGINE_H

#include "Particle.hpp"
#include "Util.hpp"

namespace trillek {
    namespace particle {
        class IParticleEngine {
            public:
                Particle Init(Particle p, float x, float y, float z);
                Particle Update(Particle p);
        };
    }
}

#endif
