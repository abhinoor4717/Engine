#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS
	#ifdef ENGINE_BUILD_DLL
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
	#endif
#else
	#error Engine only supports Windows!
#endif

#ifdef ENGINE_ENABLE_ASSERTS
	#define ENGINE_ASSERT(x, ...) { if ((!x)) { ENGINE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define ENGINE_CORE_ASSERT(x, ...) { if ((!x)) { ENGINE_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define ENGINE_ASSERT(x, ...)
	#define ENGINE_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)