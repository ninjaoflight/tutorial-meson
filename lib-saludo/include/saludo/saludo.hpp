#pragma once
#include "../../private/building_lib.hpp"
#include <string>

class Saludo {
	const std::string nombre;

  public:
	Saludo(std::string nombre);

	std::string saludar();
};