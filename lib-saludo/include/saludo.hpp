#pragma once
#if defined _WIN32 || defined __CYGWIN__
#ifdef BUILDING_LIB
#define LIB_PUBLIC __declspec(dllexport)
#else
#define LIB_PUBLIC __declspec(dllimport)
#endif
#else
#ifdef BUILDING_LIB
#define LIB_PUBLIC __attribute__((visibility("default")))
#else
#define LIB_PUBLIC
#endif
#endif
extern "C" {
void func1();
void func2();
}
#include <string>

class LIB_PUBLIC Saludo {
	const std::string nombre;

  public:
	Saludo(std::string nombre);

	std::string saludar();
};