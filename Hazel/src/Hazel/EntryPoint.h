#pragma once
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main() {
	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
