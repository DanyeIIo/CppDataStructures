#pragma once
#include<iostream>
#include<string>
#include<cassert>
/*
template<class T>
class queue
{
private:
	T* arr;
	int size = 0;
public:
	queue() : size(0),arr(nullptr){}
	void Enqueue(T symbol)
	{
		T* tmp = new T[++size];
		if (arr)
		{
			for (ptrdiff_t i = 0; i < size; i++)
			{
				tmp[i] = this->arr[i];
			}
		}
		delete[] this->arr;
		tmp[size - 1] = symbol;
		this->arr = tmp;
	}
	void Dequeue()
	{
		assert(size > 0 && "Nothing to delete!\n");
		T* tmp = new T[--size];
		for (ptrdiff_t i = 1,j = 0;i < size+1;i++, j++)
		{
			tmp[j] = this->arr[i];
		}
		delete[] this->arr;
		arr = tmp;
	}
	void show()
	{
		for (size_t i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
	bool IsFull()
	{
		if (size != 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
*/
template<class var>
class queue2
{
private:
    var* arr;
    int* priority;
    int size = 0;
public:
    queue2() : arr(nullptr), priority(nullptr), size(0) {}

    void InsertWithPriority(var element, int elpriority)
    {
        var* newarr = new var[++size];
        int* newpriority = new int[size];
        int pos;
        if (size)  {
            pos = 0;
            while (pos < size-1) 
            {
                if (priority[pos] > elpriority)
                {
                    break;
                }
                pos++;
            }
        }
        for (ptrdiff_t i = 0; i < pos; i++) {
            newarr[i] = arr[i];
            newpriority[i] = priority[i];
        }
        newarr[pos] = element;
        newpriority[pos] = elpriority;

        for (ptrdiff_t i = pos + 1; i < size ; i++) {
            newarr[i] = arr[i - 1];
            newpriority[i] = priority[i - 1];
        }
        delete[] arr;
        delete[] priority;
        arr = newarr;
        priority = newpriority;
    }
    void PullHighestPriorityElement()
    {
        assert(size > 0 && "Nothing to delete!");
        var* newarr = new var[--size];
        int* newpriority = new int[size];
        int tmpPriority = priority[0];
        int tmpArrIndex = arr[0];
        
        for (ptrdiff_t i= 0;i < size+1;i++)
        {
            if (priority[i] >= tmpPriority)
            {
                tmpPriority = priority[i];
                if (tmpPriority == priority[i])
                {
                    tmpArrIndex = i;
                }
            }
        }
        for (ptrdiff_t i= 0;i < tmpArrIndex;i++)
        {
            newarr[i] = arr[i];
            newpriority[i] = priority[i];
        }
        if (tmpArrIndex + 1 < size)
        {
            for (ptrdiff_t i = tmpArrIndex, j = i + 1; i < size; i++, j++)
            {
                newarr[i] = this->arr[j];
                newpriority[i] = this->arr[j];
            }
        }
        //return;
        arr = newarr;
        priority = newpriority;
    }
    void Show()
    {
        for (ptrdiff_t i = 0; i < size; i++)
        {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
    }
    void ShowPriority()
    {
        for (ptrdiff_t i = 0; i < size; i++)
        {
            std::cout << priority[i] << ' ';
        }
        std::cout << std::endl;
    }
    var Peek()
    {
        int tmpPriority = priority[0];
        int tmpArrIndex = arr[0];
        for (ptrdiff_t i = 0; i < size; i++)
        {
            if (priority[i] >= tmpPriority)
            {
                tmpPriority = priority[i];
                if (tmpPriority == priority[i])
                {
                    tmpArrIndex = i;
                }
            }
        }
        return this->arr[tmpArrIndex];
    }
};
class queue2Isclu4enie
{

};
