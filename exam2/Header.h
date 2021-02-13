#pragma once
#include "Header.h"
#include<string>
#include<iostream>
#include<set>
#include<stack>
#include<map>
#include <vector>
#include<list>
#include<iterator>
#include<algorithm>
#include <ios> 
#include <limits>
#include<sstream>
#include <cstring>
#include<chrono>
namespace structure
{
	union NumberOfCar
	{
		char StrNumber[9];
		int number;
	};
	class car1
	
	{
	public:

		std::string color;
		std::string model;
		//std::string numberOfCar;
		NumberOfCar carNum;
		
	};
	class functions
	{
	public:
		functions() = default;
		static void NameSurname();
		static void year();
		static void consoleColour();
		static void ASCII();
		static void zapolnenie_0_1();
		static void bitset();
		static void lessZero();
		static void perevod();
		static void Input(std::list<structure::car1>& list);
		static void Output(std::list<structure::car1> list);
		static void SearchByNumber(std::list<structure::car1> list);
		static void Redact(std::list<structure::car1> &list);
	};
	
	
}