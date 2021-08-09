#pragma once
enum class Engine
{
	Jondamotor,
	Poyota
};
class Car
{
public:
	int RaceNumber;
	int Speed = 0;
	double Acceleration = 0;
	double Distance = 0;
	Engine CarEngine;
	Car(int number,Engine engine)
	{
		RaceNumber = number;
		CarEngine = engine;
		GetEngine();
	}
private:
	void GetEngine()
	{
		if (CarEngine == Engine::Jondamotor)
		{
			Speed = 280;
			Acceleration = 2.5;
		}
		else if (CarEngine == Engine::Poyota)
		{
			Speed = 330;
			Acceleration = 4;
		}

	}
};

