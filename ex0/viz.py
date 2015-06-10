import opensim

forward = opensim.ForwardTool('setup_forward.xml')
forward.getModel().setUseVisualizer(True)
forward.run()
