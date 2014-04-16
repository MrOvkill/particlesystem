#ifndef SIMPLEPARTICLEENGINE_H
#define SIMPLEPARTICLEENGINE_H

#include "IParticleEngine.hpp"

namespace trillek {
    namespace particle {
        class SimpleParticleEngine : IParticleEngine {
            public:
                float lifeMin, lifeMax, lifeLength;
                float sizeXMin, sizeXMax, sizeYMin, sizeYMax, sizeZMin, sizeZMax;
                float gravX, gravY, gravZ;
                void Init(int ns, float x, float y, float z);
                void Update();
                std::map<int, Particle> getParticles();
        };
    }
}

#endif
