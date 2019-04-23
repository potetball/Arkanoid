#pragma once

#include "SDL.h"

namespace InputUtils {

	class InputManager
	{
	private:
		static InputManager* sInstance;
		const Uint8* mKeyBoardStates{ NULL };

		int mx{ 0 }, my{ 0 };

		const Uint8 mouseState = SDL_GetMouseState(&mx, &my);


	public:
		static InputManager* Instance();

		static void Release();

		bool KeyDown(SDL_Scancode scanCode);

		void Update();

		explicit InputManager();
		~InputManager();

	};

}

