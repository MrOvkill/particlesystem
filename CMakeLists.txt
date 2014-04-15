cmake_minimum_required(VERSION 2.6)

project(TrillekParticleSystem)

include_directories(include)
file(GLOB Source
    "src/*.cxx"
)

option(MAKE_STATIC "Build Static Libraries" off)

if(MAKE_STATIC)
add_library(ParticleSystem STATIC ${Source})
else()
add_library(ParticleSystem SHARED ${Source})
endif()

target_link_libraries(ParticleSystem)

#if(EXISTS "lib")
#if(EXISTS "lib/glfw3")
#
#endif()
#endif()
