#include <iostream>
#include "Car.h"
#include "Track.h"
#include <thread>

Car* car1 = new Car(422, Engine::Jondamotor);
Car* car2 = new Car(231, Engine::Poyota);
Track* track = new Track();
void CarNumberOne()
{
	std::cout << track->StartRace(car1) << std::endl;
}
void CarNumberTwo()
{
	std::cout << track->StartRace(car2);
}
int main()
{
	int a = 0;
	//Car car(422, 380, 4, 0,Engine::Jondamotor);
	std::thread thread1(CarNumberOne);
	std::thread thread2(CarNumberTwo);
	thread1.join();
	thread2.join();
	std::cin >> a;
	return 0;
}
