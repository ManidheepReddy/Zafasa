#pragma once

#ifdef ZA_PLATFORM_WINDOWS

extern Zafasa::Application* Zafasa::CreateApplication();

int main(int argc, char** argv)
{
	printf("Zafasa Engine\n");
	auto app = Zafasa::CreateApplication();
	app->Run();
	delete app;
}

#endif