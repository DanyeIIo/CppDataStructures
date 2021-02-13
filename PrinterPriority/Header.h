#pragma once
#include <sstream>
#include<iostream>
#include<string>
#include<list>
#include <algorithm>
//#include <algorithm>
class AutoSalone {
private:
	class Car {
	public:
		int EngineVolume;
		int cost;
		std::string Name;
		int ReleaseDate;
		Car(){}
		Car(int EngineVolume, int cost, std::string Name, int ReleaseDate)
			: EngineVolume(EngineVolume), cost(cost), Name(Name) , ReleaseDate(ReleaseDate){}
	};
	std::list<Car> cars;
public:
	AutoSalone(){}
	void AddCar(int EngineVolume, int cost, std::string Name, int ReleaseDate)
	{
		cars.push_back({ EngineVolume,cost,Name,ReleaseDate });
	}
	void DeleteCar()
	{
		std::cout << "Input 1: popback\n2: popfront\n 3: delete by name\n";
		short choose = 3;
		if (choose == 1)
		{
			cars.pop_back();
		}
		if (choose == 2)
		{
			cars.pop_front();
		}
		if (choose == 3)
		{
			std::string nameOfFind;
			std::cout << "Input name for delete car\n";
			std::cin >> nameOfFind;
			std::list<Car>::iterator it;
			for (std::list<Car>::iterator it = cars.begin(); it != cars.end(); it++)
			{
				if (it->Name == nameOfFind)
				{
					it = cars.erase(it);
				}
			}
		}
	}
	void Sort()
	{
		std::cout << "1: Sort by name\n";
		std::cout << "2: Sort by volume\n";
		std::cout << "3: Sort by Cost\n";
		short choose = 0;
		std::cin >> choose;
		if (choose == 1)
		{
			auto compare = [](const Car& a, const Car& b) {
				return a.Name < b.Name; };

			cars.sort(compare);
		}
		if (choose == 2)
		{
			auto compare = [](const Car& a, const Car& b) {
				return a.EngineVolume < b.EngineVolume; };
			cars.sort(compare);
		}
		if (choose == 3)
		{
			auto compare = [](const Car& a, const Car& b) {
				return a.cost < b.cost; };
			cars.sort(compare);
		}
	}
	void Print()
	{
		for (auto b : cars)
		{
			std::cout << "Name: "<< b.Name << std::endl;
			std::cout << "Cost: " << b.cost << std::endl;
			std::cout << "Engine volume: " << b.EngineVolume << std::endl;
			std::cout << "Release date: " << b.ReleaseDate << std::endl;
		}
	}
	
	void Search()
	{
		system("cls");
		std::string Input;
		int Info;
		std::cout << "Search by name,volume,cost,engine \nInput information about ur choose\n";
		std::cin >> Input;
		std::istringstream iss(Input, std::istringstream::in);
		iss >> Info;
		for (auto b : cars)
		{
			if (Info == b.cost || Info == b.ReleaseDate || Info == b.EngineVolume || Input == b.Name)
			{
				std::cout << "Name: " << b.Name << std::endl;
				std::cout << "Cost: " << b.cost << std::endl;
				std::cout << "Engine volume: " << b.EngineVolume << std::endl;
				std::cout << "Release date: " << b.ReleaseDate << std::endl;
			}
		}
		std::cout << std::endl;
	}
};
