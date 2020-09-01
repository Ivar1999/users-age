
#include <iostream>
#include <string>

int age;

int main() {

	std::cin >> age;


	if (age>=20) {
		std::cout << "You are an adult";
	}
	else {
		std::cout << "You are a teenager";
	}
	
	if (age <= 10) {
		std::cout << " soon^tm";
		
	}
}