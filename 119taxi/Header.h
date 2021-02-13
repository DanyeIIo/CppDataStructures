#pragma once
#include<iostream>
#include<string>
#include<cstdint>
#include<chrono>
#include<vector>
template<class bus>
class minibus_stop
{
private:
	//for realization program ->
	int am_pm = 0;
	int wait_time = 0;
	int person = 0;
	int priority = 0;
	int free_place_in_bus = 0;
	int maximum_people = 0;
	std::vector<int> average_time;
	//for queue ->
	template<class type>
	class Node
	{
	public:
		Node *pnext;
		int priority;
		std::string people;
		Node(int priority = int(),std::string people = std::string(),Node *pnext = nullptr)
		{
			this->people = people;
			this->priority = priority;
			this->pnext = pnext;
		}
	};
	int size;
	Node<bus>* head;
public:
	minibus_stop(int am_pm);
	int rand_person_arrival(int number);
	int rand_free_places_the_bus(int number);
	int rand_bus_arrival(int number);
	void people_at_bus_stop();
	void people_and_bus();
	void push_back();
	void pop_front();
	void show();
	void average_time_for_all();
	void kto_skolko_zhdal();
	//~minibus_stop();
};
template<class T>
minibus_stop<T>::minibus_stop(int am_pm) : am_pm(am_pm){}
template<class T>
int minibus_stop<T>::rand_person_arrival(int number)
{
	std::srand(unsigned(time(NULL)));
	if (this->am_pm == 0)
	{
		number = rand() % 10 + 5;
		return number;
	}
	else
	{
		number = rand() % 8 + 4;
		return number;
	}
}
template<class T>
int minibus_stop<T>::rand_bus_arrival(int number)
{
	std::srand(unsigned(time(NULL)));
	number = rand() % 30 + 30;
	return number;
}
template<class T>
int minibus_stop<T>::rand_free_places_the_bus(int number)
{
	std::srand(unsigned(time(NULL)));
	if (this->am_pm == 0)
	{
		number = rand() % 15 + 10;
		return number;
	}
	else
	{
		number = rand() % 15 + 0;	
		return number;
	}
}
template<class T>
void minibus_stop<T>::people_at_bus_stop()
{
	int counter = 0;
	int tmp = 0;
	std::srand(unsigned(time(NULL)));
	this->wait_time = rand_bus_arrival(this->wait_time);
	tmp = wait_time;
	int people_come = 0;
	while (this->person < this->wait_time)
	{
		if (this->am_pm == 0)
		{
			this->person = rand_person_arrival(this->wait_time);
			if ((people_come + this->person) <= this->wait_time)
			{
				people_come += this->person;
				this->average_time.push_back(0);
				tmp -= person;
				this->average_time[average_time.size() - 1] = tmp;
			}
			else break;
		}
		if (this->am_pm == 1)
		{
			this->person = rand_person_arrival(this->wait_time);
			if ((people_come + this->person) <= this->wait_time)
			{
				people_come += this->person;
				this->average_time.push_back(0);
				tmp -= person;
				this->average_time[average_time.size() - 1] = tmp;
			}
			else break;
		}
	}
}
template<typename T>
void minibus_stop<T>::push_back()
{
	int counter = 0;
	std::string aboutPeople;
	std::cout << "Enter kind of person example: red_badger_jeans, black_guy\n";
	for (size_t i = 0;i < average_time.size();i++)
	{
		std::cout << ++counter << " people:\n";
		std::cin >> aboutPeople;
		if (this->head == nullptr)
		{
			++priority;
			this->head = new Node<T>(this->priority, aboutPeople);
			
		}
		else
		{
			Node<T>* current = this->head;
			while (current->pnext != nullptr)
			{
				current = current->pnext;
			}
			++priority;
			current->pnext = new Node<T>(this->priority, aboutPeople);
			
		}
	}
}
template<class T>
void minibus_stop<T>::pop_front()
{
	std::cout << "free place in the bus " << this->free_place_in_bus << std::endl;
	system("pause");
	system("cls");
	std::cout << "zapuskaem people in bus\n\n";
	system("pause");
	system("cls");
	for (ptrdiff_t i = 0; i < this->free_place_in_bus; i++)
	{
		if (this->head != nullptr)
		{
			Node<T>* current = this->head;
			this->head = head->pnext;
			delete current;
		}
		else
		{
			break;
		}
	}
	system("pause");
	system("cls");
	if (average_time.size() > this->free_place_in_bus)
	{
		std::cout << "v ostanovke zhdat ostanutsya " << average_time.size() - this->free_place_in_bus << " people" << std::endl;
	}
	if (average_time.size() < this->free_place_in_bus)
	{
		std::cout << "vse uspeshno seli v avtobus" << std::endl;
	}
	if (average_time.size() == this->free_place_in_bus)
	{
		std::cout << "vse uspeshno seli v avtobus" << std::endl;
	}
	system("pause");
	system("cls");
}
template<class T>
void minibus_stop<T>::people_and_bus()
{
	int length = average_time.size();
	this->free_place_in_bus = rand_free_places_the_bus(this->free_place_in_bus);
	push_back();
	std::cout << "Time when bus came\n" << this->wait_time << std::endl;
	std::cout << "vvedite ostanovku: 0 kone4naya | 1 ne kone4naya\n";
	int input = 0;
	std::cin >> input;
	if (input == 1)
	{
		pop_front();
	}
	else
	{
		std::cout << "ostanovka u bus kone4naya nikto ne saditsya\n";
	}
	system("pause");
	system("cls");
	return;
}
template<class T>
void minibus_stop<T>::show()
{
	if (head == nullptr)
	{
		std::cout << "daunov uzhe netu\n";
	}
	else
	{ 
		Node<T>* tmp;
		tmp = head;
		while (tmp != nullptr)
		{
			std::cout << tmp->people << ' ' << tmp->priority;
			std::cout << std::endl;
			tmp = tmp->pnext;
		}
		std::cout << std::endl;
	}
	system("pause");
	system("cls");
	average_time_for_all();
}
template<class T>
void minibus_stop<T>::average_time_for_all()
{
	int sum = 0;
	for (size_t i = 0; i < this->average_time.size(); i++)
	{
		sum += this->average_time[i];
	}
	sum /= this->average_time.size();
	std::cout << "average count of people arriving at the bus stop " << sum << " minutes" << std::endl << std::endl;
	std::cout << "average time for " << this->average_time.size() << " people are sitting to the bus " << sum << std::endl << std::endl;
}
template<class T>
void minibus_stop<T>::kto_skolko_zhdal()
{
	int counter = 0;
	for (size_t i= 0;i < average_time.size();i++)
	{
		std::cout << ++counter << " people waited a ";
		std::cout << this->average_time[i] << " minutes\n";
	}
}