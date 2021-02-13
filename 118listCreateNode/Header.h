
#include <iostream>
template<class T>
class gList {
private:
    template<class T>
    class Node {
    public:
        Node* next;
        T data;
        Node(T data = T(), Node* next = nullptr) {
            this->next = next;
            this->data = data;
        }

    };

    Node<T>* root;
    int size = 0;
public:
    gList();
    void add(T element);
    void DeleteRoot();
    void AddToBegin(T element);
    void AddToEnd(T element);
    void PopBack();
    void DeleteAll();
    void Show();
    void AddToInsert(T element);
    T& operator[](const int index)const;
   
};
template<class T>
T& gList<T>::operator[] (const int index)const
{
    if (index>size)
    {
        exit(0);
    }
    int counter = 0;
    Node<T>* current = this->root;
    while (current->next != nullptr)
    {
        if (counter == index)
        {
            break;
        }
        counter++;
        current = current->next;
    }
    return current->data;
}
template<class T>
void gList<T>::AddToInsert(T element)
{

}
template<class T>
void gList<T>::AddToBegin(T element)
{
    root = new Node<T>(element, root);
    size++;
    /*
    if (!size) {
        root = new Node<T>(element);
        size++;
    }
    else {        
        Node<T>* begin = new Node<T>;
        begin->data = element;
        begin->next = root;
        root = begin;
        //
        size++;
    }
    */
}
template<class T>
void gList<T>::AddToEnd(T element)
{
    if (!size) {
        root = new Node<T>(element);
        size++;
    }
    else {

        Node<T>* end = root;
        while (end->next != nullptr) {
            end = end->next;
        }
        end->next = new Node<T>(element);
        size++;
    }
}
template<class T>
void gList<T>::PopBack()
{
    Node<T>* crawler = root->next;
    while (crawler->next && crawler->next->next!=nullptr) {
        crawler = crawler->next;
    }
    delete crawler->next;
    crawler->next = nullptr;
    this->size--;
}
template<class T>
void gList<T>::DeleteAll()
{
    while (size)
    {
        PopBack();
        size--;
    }
}
template<class T>
void gList<T>::DeleteRoot()
{
    if (size)
    {
        Node<T>* tmp = root->next;
        delete root;
        root = tmp;
        size--;
    }
    else
    {
        std::cout << "nothing to delete\n";
    }
}

template<class T>
gList<T>::gList() {
    size = 0;
    root = nullptr;
}

template<class T>
void gList<T>::add(T element) {
    if (!size) {
        root = new Node<T>(element);
        size++;
    }
    else {

        Node<T>* end = root;
        while (end->next != nullptr) {
            end = end->next;
        }
        end->next = new Node<T>(element);
        size++;
    }
}
template<class T>
void gList<T>::Show()
{
    if (root == nullptr)
    {
        std::cout << "list is empty" << std::endl;
    }
    else
    {
        Node<T>* ptr;
        ptr = root;
        while (ptr != nullptr)
        {
            std::cout << ptr->data << ' ';
            ptr = ptr->next;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

