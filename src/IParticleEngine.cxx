#include "IParticleEngine.hpp"

namespace particle
{
    void IParticleEngine::Init(int ns, float x, float y, float z)
    {
        size = ns;
    }
    
    void IParticleEngine::Update()
    {
        
    }
    
    std::map<int, Particle> IParticleEngine::getParticles()
    {
        return particles;
    }
}
