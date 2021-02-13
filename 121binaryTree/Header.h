#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
//#include<_dbdao.h>
template<class T>
class Bus
{
private:
	template<class T>
	class BinaryTree
	{
	public:
		int bus_number;
		BinaryTree* right;
		BinaryTree* left;
		std::string first_last_names;
		int minibus_number;
		int number_of_seats;
		BinaryTree(int bus_num = int(),std::string fln = std::string(),int minibus_num = int(),int seats = int(), BinaryTree* left = nullptr, BinaryTree* right = nullptr)
		{
			this->bus_number = bus_num;
			this->first_last_names = fln;
			this->minibus_number = minibus_num;
			this->number_of_seats = seats;
			this->right = right;
			this->left = left;
		}
	};
	BinaryTree<T>* root;
	int size = 0;
public:
	void addBus(int bus_num, std::string fln, int minibus_num, int seats);
	void Search(int element);
	void Show(BinaryTree<T> **f,int l);
	BinaryTree<T>**get()
	{
		return &root;
	}
};
template<class T>
void Bus<T>::addBus(int bus_num, std::string fln, int minibus_num, int seats)
{
	if (size == 0)
	{
		root = new BinaryTree<T>(bus_num, fln, minibus_num, seats);
	}
	else if (size == 1)
	{
		
		if (root->bus_number < bus_num)
		{
			root->right = new BinaryTree<T>(bus_num, fln, minibus_num, seats);
		}
		if (root->bus_number > bus_num)
		{
			root->left = new BinaryTree<T>(bus_num, fln, minibus_num, seats);
		}
		if (root->bus_number == bus_num)
		{
			std::cout << "Numbers cant be equal\n";
		}
	}
	else
	{
		BinaryTree<T>* end = root;
		while (end != nullptr)
		{
			if (bus_num < end->bus_number)
			{
				if (end->left == nullptr)
				{
					end->left = new BinaryTree<T>(bus_num, fln, minibus_num, seats);
					break;
				}
				else
				{
					end = end->left;
				}
			}
			else
			{
				if (end->right == nullptr)
				{
					end->right = new BinaryTree<T>(bus_num, fln, minibus_num, seats);
					break;
				}
				else
				{
					end = end->right;
				}
			}
			if (bus_num == end->bus_number)
			{
				std::cout << "Number cant be equal\n";
				return;
			}
		}
		end = new BinaryTree<T>(bus_num, fln, minibus_num, seats);
	}
	size++;
}
template<class T>
void Bus<T>::Search(int element)
{
	BinaryTree<T>* end = root;
	while (end != nullptr)
	{
		if (end->bus_number < element)
		{
			end = root->right;
		}
		else if (end->bus_number > element)
		{
			end = root->left;
		}
		else if (end->bus_number == element)
		{
			std::cout << "bus number: " << end->bus_number << "\nlast_first name: " << end->first_last_names << "\nnumber of minibus: " << end->minibus_number <<"\nnumber of seats: " << end->number_of_seats<< std::endl;
			break;
		}
	}
}
template<class T>
void Bus<T>::Show(BinaryTree<T>** f, int l)
{
	std::ofstream fout;
	fout.open("myTHT.txt", std::ios::app);
	if (*f != nullptr)
	{	
		Show(&((**f).left), l + 1);
		std::cout << "\nbus number: " << (**f).bus_number << "\nfirst last names: " << (**f).first_last_names << "\nminibus number: " << (**f).minibus_number << "\ncount of seats: " << (**f).number_of_seats << std::endl;
		fout << "\nbus number: " << (**f).bus_number << "\nfirst last names: " << (**f).first_last_names << "\nminibus number: " << (**f).minibus_number << "\ncount of seats: " << (**f).number_of_seats << std::endl;
		Show(&((**f).right), l + 1);
	}
}