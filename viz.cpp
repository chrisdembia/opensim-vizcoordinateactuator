#include <OpenSim/OpenSim.h>
int main(int argc, char* argv[]) {
    OpenSim::LoadOpenSimLibrary(argv[2]); //"../../build/libosimVizCoordinateActuator");
    OpenSim::ForwardTool forward(argv[1]);
    forward.getModel().setUseVisualizer(true);
    forward.run();
    return EXIT_SUCCESS;
}
