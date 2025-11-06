/**
@file CMakeProject1.cpp
*/

// CMakeProject1.cpp : définit le point d'entrée de l'application.
//

#include "CMakeProject1.h"
#include "test.hpp"
#include <SFML/Graphics.hpp>


using namespace std;
 
int main(int argc, char* argv[])
{
	cout << "Hello CMake." << endl;
	cout << Test::Incroyable() << endl;

	//intellisense deconne
	sf::Vector2f test = { 12.f, 12.f };

	cout << "test:" << test.x << endl;

	//int u = 4;
	//cin >> u; //pour garder la console ouverte
	return 0;
}




//#include <catch2/catch_test_macros.hpp>
//
//TEST_CASE("Verifications sur un vector") {
//	std::vector<int> v(5);
//
//	REQUIRE(v.size() == 5);
//
//	CHECK(v[0] == 0);
//	CHECK(v[1] == 0);
//	CHECK(v[2] == 0);
//
//
//	//failed
//	//CHECK(1 == 2);
//}
//
//SCENARIO("On peut additioner a un int", "[int]")
//{
//    GIVEN("Un int valant 5")
//    {
//        int v = 5;
//
//        REQUIRE(v == 5);
//        REQUIRE(sizeof(v) == 4);
//
//        WHEN("On ajoute 2 a l'int")
//        {
//            v += 2;
//
//            THEN("l'int vaut maintenant 7")
//            {
//                REQUIRE(v == 7);
//            }
//
//            THEN("l'int ne change pas de taille")
//            {
//                REQUIRE(sizeof(v) == 4);
//            }
//        }
//        //v a ete modif dans le when precedent, mais ca ne sera pas comptabilise dans le prochain when
//        WHEN("On retire 2 a l'int")
//        {
//            v -= 2;
//
//            THEN("l'int vaut maintenant 3")
//            {
//                REQUIRE(v == 3);
//            }
//
//            THEN("l'int ne change pas de taille")
//            {
//                REQUIRE(sizeof(v) == 4);
//            }
//        }
//    }
//}
