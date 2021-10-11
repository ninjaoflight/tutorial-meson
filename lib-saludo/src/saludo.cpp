#include <saludo.hpp>
#include <fmt/core.h>

Saludo::Saludo(std::string nombre)
    : nombre(fmt::format("Hola {}!", nombre)) {}

std::string Saludo::saludar() { return nombre.c_str(); }
