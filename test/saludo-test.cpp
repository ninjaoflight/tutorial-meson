#include <catch2/catch.hpp>
#include <iostream>
#include <saludo.hpp>

TEST_CASE("Saludar", "[Saludo]") {

	SECTION("Saludo puede generarse") {
		Saludo saludo("mundo");
		std::cout << saludo.saludar() << "\n";
		REQUIRE(saludo.saludar() == "Hola mundo!");
	}
}