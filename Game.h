//
// Created by mynewdog on 11.03.19.
//

#ifndef ARCADEGAME_GAME_H
#define ARCADEGAME_GAME_H


#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

namespace Game {

    class Game {
    private:
		SDL_Window* window{ NULL };
		SDL_Renderer* renderer{ NULL };
		SDL_Event event{ NULL };
		bool is_running{};
        int counter{0};
		
		//std::unique_ptr<SDL_Window, void(*)(SDL_Window*)> window;

		
    public:
        explicit Game();

        ~Game();

        void handle_exit_event();

        void init_window(const char *title, int xpos, int ypos, int height, int width, bool fullscreen);

        void update();

        void render();

        void clean();

        bool running() { return is_running; }

    };
}


#endif //ARCADEGAME_GAME_H
