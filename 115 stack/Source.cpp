#include<iostream>
/*
template<int size>
class Stack {
private:
    char arr[size];
    int top = -1;
public:
    void push(char c) {
        if (top + 1 < size) {
            arr[++top] = c;
        }
        else {
            std::cerr << "Stack is already full!\n";
        }
    }

    void remove() {
        top--;
    }

    int getSize() {
        return top + 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top + 1 == size;
    }

    void removeAll() {
        top = -1;
    }

    char getElement() {
        return arr[top];
    }

};

int main()
{
    Stack<3> mystack;
    mystack.push('a');
    mystack.push('b');
    mystack.push('c');
    mystack.push('d');

    std::cout << mystack.getSize();

    mystack.remove();
    std::cout << mystack.getSize();
    mystack.removeAll();
    std::cout << mystack.getSize();

    return 0;
}
*/
/*
class Stack {
private:
    char* arr;
    int size;
    int index = -1;
public:
    Stack(int size) :size(size)
    {
        arr = new char[size];
    }
    ~Stack()
    {
        delete[] arr;
        arr = nullptr;
        size = 0;
        std::cout << "vse v sad\n";
    }
    void push(char c)
    {
        if (index + 1 < size)
        {
            this->arr[++index] = c;
        }
        else 
        {
            char* arr = new char[size + 1];
            for (ptrdiff_t i = 0; i < size; i++)
            {
                arr[i] = this->arr[i];
            }
            arr[size++] = c;
            delete[] this->arr;
            this->arr = arr;
            index++;
        }
    }
    void remove() {

        char* newarr = new char[index];
        for (ptrdiff_t i = 0; i < index; i++)
        {
            newarr[i] = arr[i];
        }
        delete[] arr;
        arr = newarr;
        index--;
    }
    int getSize() {
        return this->index + 1;
    }
    bool isEmpty() {
        return this->index == -1;
    }
    bool isFull() {
        return this->index + 1 == size;
    }
    void removeAll() {
        this->index = -1;
    }
    char getElement() {
        return this->arr[index];
    }
    void Show()
    {
        for (ptrdiff_t i= 0;i < index+1;i++)
        {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
    }
};
int main()
{
    Stack mystack(4);
    mystack.push('q');
    mystack.push('w');
    mystack.push('e');
    mystack.push('r');
    mystack.push('t');
    mystack.push('y');
    mystack.Show();
    std::cout << std::endl;
    std::cout << mystack.getSize();
    mystack.remove();
    std::cout << std::endl;
    std::cout << mystack.getSize();
    std::cout << std::endl;
    mystack.removeAll();
    std::cout << std::endl;
    std::cout << mystack.getSize();
    std::cout << std::endl;
    mystack.Show();
    return 0;
}
*/