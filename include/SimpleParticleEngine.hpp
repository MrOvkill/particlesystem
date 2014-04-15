#ifndef SIMPLEPARTICLEENGINE_H
#define SIMPLEPARTICLEENGINE_H

#include "IParticleEngine.hpp"

namespace trillek {
    namespace particle {
        class SimpleParticleEngine : IParticleEngine {
            public:
                float size;
                float lifeMin, lifeMax, lifeLength;
                float sizeXMin, sizeXMax, sizeYMin, sizeYMax, sizeZMin, sizeZMax;
                float gravX, gravY, gravZ;
                Particle Init(Particle p, float x, float y, float z);
                Particle Update(Particle p);
        };
    }
}

#endif
