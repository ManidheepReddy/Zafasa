#pragma once

#ifdef ZA_PLATFORM_WINDOWS
	#ifdef ZA_BUILD_DLL
		#define ZA_API __declspec(dllexport)
	#else
		#define ZA_API __declspec(dllimport)
	#endif
#else 
	#error "Zafasa only supports Windows!"
#endif