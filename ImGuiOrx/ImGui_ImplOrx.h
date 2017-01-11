// ImGui GLFW binding with OpenGL
// In this binding, ImTextureID is used to store an OpenGL 'GLuint' texture identifier. Read the FAQ about ImTextureID in imgui.cpp.

// If your context is GL3/GL3 then prefer using the code in opengl3_example.
// You *might* use this code with a GL3/GL4 context but make sure you disable the programmable pipeline by calling "glUseProgram(0)" before ImGui::Render().
// We cannot do that from GL2 code because the function doesn't exist. 

// You can copy and use unmodified imgui_impl_* files in your project. See main.cpp for an example of using this.
// If you use this binding you'll need to call 4 functions: ImGui_ImplXXXX_Init(), ImGui_ImplXXXX_NewFrame(), ImGui::Render() and ImGui_ImplXXXX_Shutdown().
// If you are new to ImGui, see examples/README.txt and documentation at the top of imgui.cpp.
// https://github.com/ocornut/imgui

#include "ImGui/imgui.h"

IMGUI_API bool        ImGui_ImplOrx_Init();
IMGUI_API void        ImGui_ImplOrx_Shutdown();
IMGUI_API void        ImGui_ImplOrx_NewFrame();

// Use if you want to reset your rendering device without losing ImGui state.
IMGUI_API void        ImGui_ImplOrx_InvalidateDeviceObjects();
IMGUI_API bool        ImGui_ImplOrx_CreateDeviceObjects();

// GLFW callbacks (installed by default if you enable 'install_callbacks' during initialization)
// Provided here if you want to chain callbacks.
// You can also handle inputs yourself and use those as a reference.
IMGUI_API void        ImGui_ImplOrx_MouseButtonCallback(int button, int action, int mods);
IMGUI_API void        ImGui_ImplOrx_ScrollCallback(double xoffset, double yoffset);
IMGUI_API void        ImGui_ImplGlFw_KeyCallback(int key, int scancode, int action, int mods);
IMGUI_API void        ImGui_ImplOrx_CharCallback(unsigned int c);

IMGUI_API void        ImGui_ImplOrx_Render(void * pvViewport, ImDrawData* draw_data);
