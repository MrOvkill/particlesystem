#ifndef SIMPLEPARTICLEENGINE_H
#define SIMPLEPARTICLEENGINE_H

#include "IParticleEngine.hpp"

namespace particle
{
    class SimpleParticleEngine : public IParticleEngine
    {
        public:
            float lifeMin, lifeMax, lifeLength;
            float sizeXMin, sizeXMax, sizeYMin, sizeYMax, sizeZMin, sizeZMax;
            float gravX, gravY, gravZ;
            float startXMin, startXMax, startYMin, startYMax, startZMin, startZMax;
            void Init(int ns, float x, float y, float z);
            void Update();
    };
}

#endif
