
#ifndef OPENSIM_VIZ_COORDINATE_ACTUATOR_H_
#define OPENSIM_VIZ_COORDINATE_ACTUATOR_H_

#include "osimVizCoordinateActuatorDLL.h"

#include <OpenSim/Actuators/CoordinateActuator.h>

namespace OpenSim { 

class OSIMVIZCOORDINATEACTUATOR_API VizCoordinateActuator :
    public CoordinateActuator {
OpenSim_DECLARE_CONCRETE_OBJECT(VizCoordinateActuator, CoordinateActuator);
public:
    void generateDecorations(
            bool fixed,
            const ModelDisplayHints& hints,
            const SimTK::State& state,
            SimTK::Array_<SimTK::DecorativeGeometry>& appendToThis) const;
};	// END of class VizCoordinateActuator

}; //namespace
//==============================================================================
//==============================================================================

#endif // OPENSIM_VIZ_COORDINATE_ACTUATOR_H_


