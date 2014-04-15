cmake_minimum_required(VERSION 2.6)

project(TrillekParticleSystem)

include_directories(include)
file(GLOB Source
    "src/*.cxx"
)

option(MAKE_SHARED "Build Shared Libraries" off)

if(MAKE_SHARED)
add_library(ParticleSystem SHARED ${Source})
else()
add_library(ParticleSystem STATIC ${Source})
endif()

target_link_libraries(ParticleSystem)
