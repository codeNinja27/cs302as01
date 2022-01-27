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
    return *this;
}

template <typename type>
const typename LL<type>::iterator& LL<type>::iterator::operator--(int)
{
    current = current->prev;
    return *this;
}

template <typename type>
bool LL<type>::iterator::operator==(const iterator& rhs) const 
{
    if(this->current == rhs.current) 
    {
        return true;
    }
    return false;
}

template <typename type>
bool LL<type>::iterator::operator!=(const iterator& rhs) const
{
    if(this->current != rhs.current) 
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
    return iterator(head);
}

template <typename type>
typename LL<type>::iterator LL<type>::end() const
{
    return iterator(tail);
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
    int *i; 
    int temp;

    cout << "Enter file with list: " << endl;
    cin >> filename;

    infile.open(filename); //open file

    //i = NULL;
    //while (i != List.begin()) 
    // {

    // }

    // for(int i = 0; i < 10; i++) {
    //     infile >> temp;
    //     cout << temp << endl;
    // }



// list.tailInsert(1); list.tailInsert(2); list.tailInsert(3); list.tailInsert(4); list.tailInsert(5);
// it = list.begin();
// while (it != nil) {
// std::cout << *it << endl;
// it ++; }

    infile.close(); //close file

    return 0;
}


