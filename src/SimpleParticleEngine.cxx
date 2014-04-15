#include "SimpleParticleEngine.hpp"

using namespace trillek::util;

namespace trillek {
    namespace particle {
        Particle SimpleParticleEngine::Init(Particle p, float x, float y, float z) {
            Particle part = p;
            sizeXMin = -10.f;
            sizeYMin = -10.f;
            sizeZMin = -10.f;
            sizeXMax = 10.f;
            sizeYMax = 10.f;
            sizeZMax = 10.f;
            lifeMin = 5.f;
            lifeMax = 10.f;
            lifeLength = 0.1f;
            gravX = 0.f;
            gravY = 0.f;
            gravZ = 0.f;
            part.x = x;
			part.sx = x;
			part.y = y;
			part.sy = y;
			part.z = z;
			part.sz = z;
			part.vx = Util::randFloat(sizeXMin, sizeXMax);
			part.vy = Util::randFloat(sizeYMin, sizeYMax);
			part.vz = Util::randFloat(sizeZMin, sizeZMax);
			part.life = Util::randFloat(lifeMin, lifeMax);
            return part;
        }
        Particle SimpleParticleEngine::Update(Particle p) {
            Particle part = p;
            part.x += part.vx;
			part.y += part.vy;
			part.z += part.vz;
			part.vx += gravX;
			part.vy += gravY;
			part.vz += gravZ;
			part.life -= lifeLength;
			if(part.life <= 0)
			{
				part.x = part.sx;
				part.y = part.sy;
				part.z = part.sz;
				part.vx = Util::randFloat(sizeXMin, sizeXMax);
			    part.vy = Util::randFloat(sizeYMin, sizeYMax);
			    part.vz = Util::randFloat(sizeZMin, sizeZMax);
			    part.life = Util::randFloat(lifeMin, lifeMax);
			}
            return part;
        }
    }
}
