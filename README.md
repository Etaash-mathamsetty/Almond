# Almond

Almond is a simple application framework built with Dear ImGui and designed to be used with SDL Renderer - basically this means you can seemlessly blend real-time platform agnostic rendering with a great UI library to build desktop applications.

Currently functional (viewports enable not working (upstream bug))  
You will have to contribute Mac support yourself! (I will deal with Windows for now)  

![image](https://user-images.githubusercontent.com/45927311/184246104-f6565e28-1bc7-4f04-853b-a7e020e4a77f.png)



Why I did this:  
- Walnut didn't work on Linux and MacOS  
- Walnut wouldn't work well on older hardware that doesn't support Vulkan  
- MacOS doesn't even support Vulkan  
- SDL2 is plain better compared to GLFW  

### 3rd party libaries
- [Dear ImGui](https://github.com/ocornut/imgui)
- [SDL2](https://github.com/libsdl-org/SDL)
- [GLM](https://github.com/g-truc/glm) (included for convenience)

### Additional
- Almond uses the [Roboto](https://fonts.google.com/specimen/Roboto) font ([Apache License, Version 2.0](https://www.apache.org/licenses/LICENSE-2.0))
