
#include "VizCoordinateActuator.h"
#include <OpenSim/OpenSim.h>


void OpenSim::VizCoordinateActuator::generateDecorations(
        bool fixed,
        const ModelDisplayHints& hints,
        const SimTK::State& state,
        SimTK::Array_<SimTK::DecorativeGeometry>& appendToThis) const {
    getModel().getMultibodySystem().realize(state, SimTK::Stage::Velocity); //realizeVelocity(state);
    const double val = -getControl(state);
    std::cout << "DEBUG " << val << std::endl;
    appendToThis.push_back(SimTK::DecorativeCircle(val));
}
