
#include "VizCoordinateActuator.h"


void OpenSim::VizCoordinateActuator::generateDecorations(
        bool fixed,
        const ModelDisplayHints& hints,
        const SimTK::State& state,
        SimTK::Array_<SimTK::DecorativeGeometry>& appendToThis) const {
    appendToThis.push_back(SimTK::DecorativeCircle());
}
