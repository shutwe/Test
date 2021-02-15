#include "foo.h"
#include <vector>
#include <list>

void Foo::InnerFunc ()
    {
    }

std::string Foo::TestPlay ()
    {
    InnerFunc ();
    std::string answ = "";
    for (int i = m_value.size() - 1; i >= 0; i-- )
        {
        answ += m_value[i];
        }
    std::vector<int> vector = {1, 2, 3}; //creating a vector (of int)
    vector.push_back (4); //add memebr to vector

    for (int i = 0; i < vector.size (); ++i) //for loop for vector
        {
        //do something in loop with each element
        vector[i] = vector[i] + 3;
        }
    
    std::list<int> list = {1, 2, 3};
    list.push_back (4);

    for (auto it = list.begin(); it != list.end(); ++it) //for loop for list - NOTE we using iterator, not integer
        {
        *it = *it + 4; //Note it is iterator, it points to location in list, *it (pointer to iterator)  is a value of it   
        }

    return answ;

    }