#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int agrc, char** argv) {

	printf("Hello!");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;

}

#endif