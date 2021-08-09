#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include "Car.h"
#include <string>
class Track
{
public:
	std::string	StartRace(Car* car)
	{
		std::this_thread::sleep_for(std::chrono::seconds((int)car->Acceleration));
		while (!IsFinished(car->Distance))
		{
			car->Distance += car->Speed * 0.2778;
		}
		return "Car number" + std::to_string(car->RaceNumber) + " finished";
	}
	bool IsFinished(double distance)
	{
		if (distance >= 400)
		{
			return true;
		}
		return false;
	}
};

