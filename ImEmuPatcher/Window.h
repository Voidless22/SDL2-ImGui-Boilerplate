#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include "imgui.h"

class Window {
public:
    Window();
    ~Window();

    void handleWndEvents();
    void Render();
    bool isClosed() const;

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    ImGuiIO io;
    ImVec4 wndBGCol;
    bool closed;
};

#endif // WINDOW_H
