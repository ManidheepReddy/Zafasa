#pragma once
#include "Core.h"

namespace Zafasa
{
	class ZA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();//To defined in the client application
}

