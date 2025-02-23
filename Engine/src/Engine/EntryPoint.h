#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int agrc, char** argv) {

	Engine::Log::Init();

	ENGINE_CORE_INFO("Initilizing Engine!");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;

}

#endif