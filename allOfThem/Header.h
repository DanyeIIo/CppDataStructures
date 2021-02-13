#pragma once
#include<string>
#include<iostream>
#include<chrono>
#include <cassert>
#include <vector>
//1,2
/*
class Stack
{

private:
	int size = 0;
	class Node
	{
	public:
		Node* next;
		int var;
		Node(int var = int(), Node* next = nullptr)
		{
			this->var = var;
			this->next = next;
		}
	};
	Node* root;
public:
	
	
	void Delete()
	{
		Node* tmp = root;
		while (tmp->next->next != nullptr)
		{
			tmp = tmp->next;
		}
		delete tmp->next;
		tmp->next = nullptr;
		size--;
	}
	void push_back(int element)
	{
		if (root ==nullptr)
		{
			root = new Node(element);
		}
		else
		{
			Node* tmp = root;
			while (tmp->next != nullptr)
			{
				tmp = tmp->next;
			}
			tmp->next = new Node(element);
			tmp->next->next = nullptr;
		}
		size++;
	}
	void Show()
	{
		for (Node*it = root; it != nullptr; it = it->next)
		{
			std::cout << it->var <<' ';
		}
		std::cout << std::endl;
	}
	Stack::Node* get()
	{
		return *&root;
	}
	Stack::Node *Copy(const Stack& object)
	{
		Node* tmp = object.root;
		int count = 0;
		while (tmp !=nullptr)
		{
			if (root == nullptr)
			{
				root = new Node(tmp->var);
			}
			else
			{
				Node* ptr = root;
				while (ptr->next != nullptr)
				{
					ptr = ptr->next;
				}
				ptr->next = new Node(tmp->var);
				ptr->next->next = nullptr;
			}
			tmp = tmp->next;
		}
		//std::cout << '\n' << &root << std::endl;
		//std::cout << &object.root << std::endl;
		return *&root;
	}
	Stack operator+(const Stack& object)
	{
		Node* tmp = object.root;
		int count = 0;
		while (tmp != nullptr)
		{
			if (root == nullptr)
			{
				root = new Node(tmp->var);
			}
			else
			{
				Node* ptr = root;
				while (ptr->next != nullptr)
				{
					ptr = ptr->next;
				}
				ptr->next = new Node(tmp->var);
				ptr->next->next = nullptr;
			}
			tmp = tmp->next;
		}
		//return tmp;
		return *this;
	}
	Stack& operator*(const Stack& object)
	{
		Stack result;
		Node* it1 = object.root;
		//Node* it2 = root;
		int count = 0;
		while (it1!=nullptr)
		{
			for(Node* it2 = root;it2 != nullptr;it2 = it2->next)
			{
				if (it2->var == it1->var)
				{
					if (result.get() == nullptr)
					{
						result.push_back(it1->var);
					}
					else
					{
						bool toggle = false;
						for (Node* it = result.get(); it != nullptr; it = it->next)
						{
							
							if (it1->var == it->var)
							{
								toggle = true;
								break;
							}
						}
						if (toggle == false)
						{
							result.push_back(it1->var);
						}
					}
				}
			}
			it1 = it1->next;
		}

		return result;
	}
};
*/
//2
//1,2
/*
class queue
{
private:
	class Node
	{
	public:
		Node* next;
		Node* prev;
		int variable;
		Node(int variable = int(), Node* next = nullptr, Node* prev = nullptr)
		{
			this->variable = variable;
			this->next = next;
			this->prev = prev;
		}
	};
	int size = 0;
	Node* root;
public:
	void AddToHead(int element);
	void AddToTail(int element);
	void AddLessInsert(int index,int element);
	void DeleteFromHead();
	void DeleteFromTail();
	void DeleteFromInsert(int index);
	void Show();
	queue::Node *GetRoot() { return root; }
	queue::Node Clone(const queue &object,size_t size);
	inline int getSize() const { return size; }
	queue& operator*(const queue& object);
	queue::Node& operator+=(const queue& object);
};
void::queue::AddToHead(int element)
{
	if (root == nullptr)
	{
		root = new Node(element);
	}
	else if (size == 1)
	{
		Node* NewNode = new Node(element, root, root);
		root->next = NewNode;
		root->prev = NewNode;
		root = root->next;
	}
	else
	{
		Node* NewNode = new Node(element, root, root->prev);
		root->prev->next = NewNode;
		root->prev = NewNode;
		root = root->prev;
	}
	size++;
}
void::queue::AddToTail(int element)
{
	if (root == nullptr)
	{
		root = new Node(element);
	}
	else if (size == 1)
	{
		Node* NewNode = new Node(element, root, root);
		root->next = NewNode;
		root->prev = NewNode;
	}
	else
	{
		Node* NewNode = new Node(element, root, root->prev);
		root->prev->next = NewNode;
		root->prev = NewNode;
	}
	size++;
}
void::queue::DeleteFromHead()
{
	if (size > 0)
	{

		if (size == 1)
		{
			delete root;
			root = nullptr;
		}
		else
		{
			Node* tmp = root;
			root = root->next;
			root->prev = root->prev->prev;
			root->prev->next = root;
			delete tmp;
		}
		size--;
	}
}
void::queue::DeleteFromTail()
{
	if (size > 0)
	{
		if (size == 1)
		{
			delete root;
			root = nullptr;
		}
		else
		{
			Node* tmp = root->prev;
			root->prev = root->prev->prev;
			root->prev->next = root;
			delete tmp;
		}
		size--;
	}
	else
	{
		std::cout << "Nothing to delete\n";
	}
}
void::queue::AddLessInsert(int index, int element)
{
	if (index > size && index < 0)
	{
		std::cout << "index is not found\n";
	}
	else
	{
		if (root == nullptr)
		{
			root = new Node(element);
		}
		else if (size == 1)
		{
			if (index == 1)
			{
				Node* NewNode = new Node(element, root, root);
				root->next = NewNode;
				root->prev = NewNode;
			}
			else
			{
				Node* NewNode = new Node(element, root, root);
				root->next = NewNode;
				root->prev = NewNode;
				root = root->prev;
			}
		}
		else
		{
			Node* it = root;
			for (int i = 0; i < index; i++)
			{
				it = it->next;
			}
			Node* newElem = new Node(element, it, it->prev);
			it->prev->next = newElem;
			it->prev = newElem;
			if (index == 0)
			{
				root = root->prev;
			}
		}
		size++;
	}
}
void::queue::DeleteFromInsert(int index)
{
	if (size > index && size > 0 && index >= 0)
	{
		if (size == 1)
		{
			delete root;
			root = nullptr;
			
		}
		else if (size == 2)
		{
			if (index == 0)
			{
				root = root->next;
				delete root->next;
				root->next = nullptr;
				root->prev = nullptr;
			}
			else
			{
				delete root->next;
				root->next = nullptr;
				root->prev = nullptr;
			}
		}
		else
		{
			Node* it = root;
			for(ptrdiff_t i= 0;i < index;i++)
			{	
				it = it->next;
			}
			it->prev->next = it->next;
			it->next->prev = it->prev;
			delete it;
		}
		size--;
	}
}
void::queue::Show()
{
	Node* it = root;
	for (ptrdiff_t i= 0;i < size;i++)
	{
		std::cout << it->variable << ' ';
		it = it->next;
	}
	
	//std::cout << std::endl;
	//for (ptrdiff_t i = 0; i < size; i++)
	//{
		//std::cout << it->variable << ' ';
		//it = it->prev;
	//}
	
	std::cout << std::endl;
}
queue::Node queue::Clone(const queue &object,size_t size)//queue::Node queue::Clone -( 10 minut ebalsya 4tobi eto sdelat ) a potom doperlo
{
	 Node* it = object.root;
	 for (size_t i= 0;i < size;i++)
	 {
		 if (root == nullptr)
		 {
			 root = new Node(it->variable);
		 }
		 else if (this->size == 1)
		 {
			 Node* NewNode = new Node(it->variable, root, root);
			 root->next = NewNode;
			 root->prev = NewNode;
		 }
		 else
		 {
			 Node* NewNode = new Node(it->variable, root, root->prev);
			 root->prev->next = NewNode;
			 root->prev = NewNode;
		 }
		 it = it->next;
		 this->size++;
	 }
	 return *root;
}
queue &queue::operator*(const queue& object)
{

	queue result;
	Node* it1 = object.root;
	//Node* it2 = root;
	for(ptrdiff_t i = 0;i < this->size;i++)
	{
		Node* it2 = root;
		for (ptrdiff_t i = 0; i < object.size; i++)
		{
			if (it2->variable == it1->variable)
			{
				if (result.GetRoot() == nullptr)
				{
					result.AddToTail(it1->variable);
				}
				else
				{
					bool toggle = false;
					Node* it = result.GetRoot();
					for (ptrdiff_t i = 0;i < result.getSize();i++)
					{
						if (it2->variable == it->variable)
						{
							toggle = true;
							break;
						}
						it = it->next;
					}
					if (toggle == false)
					{
						result.AddToTail(it1->variable);
					}
				}
			}
			it2 = it2->next;
		}
		it1 = it1->next;
	}
	return result;
}
queue::Node &queue::operator+=(const queue& object)
{
	Node* tmp = root;
	Node* it = object.root;
	for (ptrdiff_t i = 0;i < object.size;i++)
	{
		if (root == nullptr)
		{
			if (object.root!=nullptr)
			{
				root = new Node(object.root->variable);
			}
			else
			{
				break;
			}
		}
	    else if (root->next == nullptr)
		{
			Node* NewElement = new Node(it->variable,root,root);
			root->next = NewElement;
			root->prev = NewElement;
		}
		else
		{
			Node* NewElement = new Node(it->variable, root, root->prev);
			root->prev->next = NewElement;
			root->prev = NewElement;
		}
		it = it->next;
		size++;
	}
	return *root;
}
*/
//3
class BinaryPoliceTree
{
private:
	class Knot
	{
	public:
		Knot* RightPtr;
		Knot* LeftPtr;
		int NumberOfCar;
		std::string offence;
		Knot(int NumberOfCar = int(), std::string offence = std::string(), Knot* RightPtr = nullptr, Knot* LeftPtr = nullptr)
		{
			this->LeftPtr = LeftPtr;
			this->RightPtr = RightPtr;
			this->NumberOfCar = NumberOfCar;
			this->offence = offence;
		}
	};
	Knot* root;
	int size = 0;
public:
	void AddNumberOfCar(int number, std::string offence);
	void Search(int number);
	void ShowAll(Knot** a, int b);
	Knot **getRoot()
	{
		return &root;
	}
private:
	
	void ShowByRange();
	
};
void BinaryPoliceTree::AddNumberOfCar(int number, std::string offence)
{
	std::string ffd;
	if (this->root == nullptr)
	{
		this->root = new Knot(number, offence);
	}
	else if (size == 1)
	{
		if (root->NumberOfCar > number)
		{
			root->LeftPtr = new Knot(number, offence);
		}
		else if (root->NumberOfCar < number)
		{
			root->RightPtr = new Knot(number, offence);
		}
		else if (root->NumberOfCar == number)
		{
			root->offence.push_back(*offence.c_str());
		}
	}
	else
	{
		Knot* it = root;
		while (1)
		{
			if (number < it->NumberOfCar)
			{
				if (it->LeftPtr == nullptr)
				{
					it->LeftPtr = new Knot(number, offence);
					break;
				}
				else
				{
					it = it->LeftPtr;
				}
			}
			else if (number > it->NumberOfCar)
			{
				if (it->RightPtr == nullptr)
				{
					it->RightPtr = new Knot(number, offence);
					break;
				}
				else
				{
					it = it->RightPtr;
				}
			}
			else if (number == it->NumberOfCar)
			{
				it->offence.push_back(*offence.c_str());
				break;
			}
		}
	}
}
void::BinaryPoliceTree::Search(int number)
{
	Knot* it = root;
	while (it!= nullptr)
	{
		if (number < it->NumberOfCar)
		{
			it = it->LeftPtr;
		}
		else if (number > it->NumberOfCar)
		{
			it = it->RightPtr;
		}
		else if (number == it->NumberOfCar)
		{
			int counter = 0;
			std::cout << "Number of car: " << it->NumberOfCar << std::endl;
			std::cout << "Offence:\n";
			for (size_t i= 0;i < it->offence.size();i++)
			{
				std::cout << it->offence[i] << std::endl;
			}
		}
	}
}
void::BinaryPoliceTree::ShowAll(Knot**a, int b)
{
	if ((*a)!= nullptr)
	{
		ShowAll(&((**a).LeftPtr), b + 1);
		std::cout << "\nNumber of car: " << (**a).NumberOfCar;
		std::cout << "\nOffence: " << (**a).offence << std::endl;
		ShowAll(&((**a).RightPtr), b + 1);
	}
}