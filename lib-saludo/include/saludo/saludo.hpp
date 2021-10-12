#pragma once
#include "../../private/building_lib.hpp"
#include <string>

class Saludo {
	std::string nombre;

  public:
	Saludo(std::string nombre = "Mundo");
	void setNombre(std::string nombre);
	std::string saludar();
};