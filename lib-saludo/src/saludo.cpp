#include <saludo/saludo.hpp>
#include <fmt/core.h>

Saludo::Saludo(std::string nombre)
    : nombre(nombre) {}

void Saludo::setNombre(std::string nombre){
    this->nombre = nombre;
}

std::string Saludo::saludar() { return fmt::format("Hola {}!", nombre); }
