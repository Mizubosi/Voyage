#pragma once

#include "Core.h"

namespace Voyage {
	class VOYAGE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

