#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS
	#ifdef ENGINE_BUILD_DLL
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
	#endif
#else
<<<<<<< HEAD
	#error Engine only supports Windows!
=======
	#define ENGINE_API
>>>>>>> 9314872 (Fixed premake)
#endif