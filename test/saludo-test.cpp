#include <catch2/catch.hpp>
#include <iostream>
#include <saludo/saludo.hpp>

TEST_CASE("Saludar", "[Saludo]") {

	SECTION("Saludo puede generarse") {
		Saludo saludo;
		REQUIRE(saludo.saludar() == "Hola Mundo!");
	}
	SECTION("Saludo puede cambiar su nombre") {
		Saludo saludo;
		saludo.setNombre("a todos");
		REQUIRE(saludo.saludar() == "Hola a todos!");
	}
}