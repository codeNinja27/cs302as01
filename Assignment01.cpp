//Tharaka Wijekularatne CS302 Assignment 01
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cctype>
using namespace std;

//Class  
template <typename type> 
class LL
{
    struct node 
    {
        type data; 
        node * prev; 
        node * next;
    };

public:
    class iterator 
    {
    public:
        friend class LL;
        iterator ();
        iterator(node*);
        type operator*() const;
        const iterator& operator++(int);
        const iterator& operator --(int);
        bool operator==(const iterator&) const; 
        bool operator!=(const iterator&) const;
    private:
        node * current;
    };

    LL ();
    LL(const LL<type>&);
    const LL<type>& operator=(const LL<type>&); 
    ~LL();
    void tailInsert(const type&);
    iterator begin() const;
    iterator end() const;
    void swapNodes(iterator&, iterator&);
private:
    node * head; 
    node * tail;
};



//Class defenitions
template <typename type>
LL<type>::iterator::iterator() 
{
    current = NULL;
}

template <typename type>
LL<type>::iterator::iterator(node * ptr) 
{
    ptr = current;
}

template <typename type>
type LL<type>::iterator::operator*() const 
{
    return current->data;
}

template <typename type>
const typename LL<type>::iterator& LL<type>::iterator::operator++(int) 
{
    current = current->next;
}

template <typename type>
const typename LL<type>::iterator& LL<type>::iterator::operator--(int)
{
    current = current->prev;
}

template <typename type>
bool LL<type>::iterator::operator==(const iterator& rhs) const 
{
    if(this == rhs) 
    {
        return true;
    }
    return false;
}

template <typename type>
bool LL<type>::iterator::operator!=(const iterator& rhs) const
{
    if(this != rhs) 
    {
        return true;
    }
    return false;
}

//
template <typename type>
LL<type>::LL()
{
    head = NULL;
    tail = NULL;
}

template <typename type>
LL<type>::LL(const LL<type>& copy)
{
    this->head = copy->head;
    this->tail = copy->tail;
}

template <typename type>
const LL<type>& LL<type>::operator=(const LL<type>& rhs)
{
    
    return *this;
}

template <typename type>
LL<type>::~LL() 
{
    
}

template <typename type>
void LL<type>::tailInsert(const type& item)
{

}

template <typename type>
typename LL<type>::iterator LL<type>::begin() const
{

}

template <typename type>
typename LL<type>::iterator LL<type>::end() const
{

}

template <typename type>
void LL<type>::swapNodes(iterator& it1, iterator& it2)
{

}

//Main
int main() 
{
    
    string filename;
    ifstream infile; 
    LL<int> list; 
    LL<int>::iterator it; 
    LL<int>::iterator nil(NULL);

    int temp;

    cout << "Please enter the name of the imput file: " << endl;
    cin >> filename;

    infile.open(filename); //open file


    // for(int i = 0; i < 10; i++) {
    //     infile >> temp;
    //     cout << temp << endl;
    // }

    infile.close(); //close file

    return 0;
}
