#pragma once

//#ifdef WL_PLATFORM_WINDOWS || WL_PLATFORM_LINUX

extern Almond::Application* Almond::CreateApplication(int argc, char** argv);
bool g_ApplicationRunning = true;

namespace Almond {

	int Main(int argc, char** argv)
	{
		while (g_ApplicationRunning)
		{
			Almond::Application* app = Almond::CreateApplication(argc, argv);
			app->Run();
			delete app;
		}

		return 0;
	}

}

#ifdef WL_DIST

#include <Windows.h>

int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
	return Almond::Main(__argc, __argv);
}

#else

int main(int argc, char** argv)
{
	return Almond::Main(argc, argv);
}

#endif // WL_DIST

//#endif // WL_PLATFORM_WINDOWS
