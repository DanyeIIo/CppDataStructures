#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<chrono>
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
	void AddLessInsert(int index, int element);
	void DeleteFromHead();
	void DeleteFromTail();
	void DeleteFromInsert(int index);
	void Show();
	queue::Node* GetRoot() { return root; }
	queue::Node Clone(const queue& object, size_t size);
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
			for (ptrdiff_t i = 0; i < index; i++)
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
	for (ptrdiff_t i = 0; i < size; i++)
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