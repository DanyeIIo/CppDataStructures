#pragma once
#include <iostream>

using namespace std;

class List
{
private:

    class Node
    {
    public:

        Node* next;
        int data;

        Node(int data = int(), Node* next = nullptr)
        {
            this->data = data;
            this->next = next;
        }

    };

    Node* head;
    int count = -1;

public:

    List()
    {
        head = nullptr;
    }

    void Push(int el)
    {
        Node* newnode = new Node(el);
        if (head == 0)
        {
            head = newnode;
        }
        else
        {
            Node* tmp = new Node();
            tmp->next = head;
            tmp->data = el;
            head = tmp;
        }
        count++;
    }

    void Print()
    {
        if (head == nullptr)
        {
            cout << "stack is empty!" << endl;
        }
        else
        {
            Node* tmp = head;
            while (head != nullptr)
            {
                cout << tmp->data << "\t";
                tmp = tmp->next;
            }
            cout << endl;
        }
    }
    int Count()
    {
        if (head == nullptr)
        {
            return 0;
        }
        else
        {
            Node* tmp = head;

            int count = 0;

            while (tmp != nullptr)
            {
                count++;
                tmp = tmp->next;
            }
        }
    }

    void Pop()
    {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        tmp = nullptr;
    }

    void Empty()
    {
        Node* tmp;
        Node* tmp2;

        tmp = head;
        while (tmp != nullptr)
        {
            tmp2 = tmp;
            tmp = tmp->next;
            delete tmp2;
        }
        head = nullptr;
    }

    const List& operator+ (const List& obj)
    {
        List newList;
        Node* temp = head;
        for (int i = 0; i < count; i++)
        {
            newList.Push(temp->data);
            temp = temp->next;
        }
        temp = obj.head;
        for (int i = 0; i < count; i++)
        {
            newList.Push(temp->data);
            temp = temp->next;
        }
        return newList;
    }
    const List& operator* (const List& obj)
    {
        ptrdiff_t size = 0;
        int size_naoborot = 0;
        Node* del = head;
        Node* bbcdfgh = head;
       // Node* tmp = obj.head;
        while (del != nullptr)
        {
            for (Node* it2 = del->next; it2 != nullptr; it2 = it2->next)
            {
                if (del->data == it2->data)
                {
                    size_naoborot--;

                }
            }
            del = del->next;
        }
        std::cout << std::endl;
        while(del!=nullptr)
        {
            for (Node* it2 = obj.head; it2!= nullptr; it2 = it2->next)
            {
                if (del->data == it2->data)
                {
                    size++;

                }
            }
            del = del->next;
        }
        std::cout << size;
        return obj;
    }

    void Clone(List const& obj)
    {
        Node* del = head;
        while (del)
        {
            head = del->next;
            cout << "del: " << del->data << ", ";
            delete del;
            del = head;
        }
        cout << endl;

        Node* tmp = obj.head;
        while (tmp)
        {
            Push(tmp->data);
            tmp = tmp->next;
        }

        Node* first = head, * second = nullptr, * third = nullptr;
        if (head)
        {
            second = head->next;
            if (head->next)
            {
                third = head->next->next;
            }
        }
        if (first)
        {
            first->next = nullptr;
            if (second)
            {
                second->next = first;
                while (third)
                {
                    first = second;
                    second = third;
                    third = third->next;
                    second->next = first;
                }
                head = second;
            }
            cout << endl;
        }
    }

    ~List()
    {
        Empty();
    }

};