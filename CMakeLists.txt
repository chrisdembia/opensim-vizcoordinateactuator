project(OpenSimVizCoordinateActuator)

cmake_minimum_required(VERSION 2.6)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}")
find_package(OpenSim REQUIRED)

include_directories(${OPENSIMSIMBODY_INCLUDE_DIRS})

set(SOURCE
    VizCoordinateActuator.h
    VizCoordinateActuator.cpp
    RegisterTypes_osimVizCoordinateActuator.h
    RegisterTypes_osimVizCoordinateActuator.cpp
    osimVizCoordinateActuatorDLL.h
    )

add_library(osimVizCoordinateActuator SHARED ${SOURCE})
set_target_properties(osimVizCoordinateActuator PROPERTIES
    DEFINE_SYMBOL OSIMVIZCOORDINATEACTUATOR_EXPORTS)
target_link_libraries(osimVizCoordinateActuator ${OPENSIMSIMBODY_LIBRARIES})

add_executable(viz viz.cpp)
target_link_libraries(viz ${OPENSIMSIMBODY_LIBRARIES})

install(TARGETS osimVizCoordinateActuator DESTINATION .)

