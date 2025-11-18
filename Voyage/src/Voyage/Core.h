#pragma once

#ifdef VOYAGE_PLATFORM_WINDOWS
	#ifdef VOYAGE_BUILD_DLL
		#define VOYAGE_API __declspec(dllexport)
	#else
		#define VOYAGE_API __declspec(dllimport)
	#endif
#else
	#error Unsupported platform!

#endif