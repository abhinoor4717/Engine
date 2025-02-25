#include "enginepch.h"
#include "Application.h"

#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"
#include "Engine\Events\EventFormatter.h"

namespace Engine {

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

	Application::Application() {
		m_Window = std::unique_ptr<Window>(Window::Create());
		m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
	}

	Application::~Application() {

	}

	void Application::Run() {
		while (m_Running) {

			m_Window->OnUpdate(); 

		}
	}

	void Application::OnEvent(Event& e) {
		if (e.GetEventType() == Engine::EventType::WindowClose) {
			m_Running = false;
		}
		ENGINE_CORE_TRACE("{0}", e);
	}

}