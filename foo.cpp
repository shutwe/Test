#include "foo.h"

std::string Foo::TestPlay ()
    {
    std::string answ = "";
    for (int i = m_value.size() - 1; i >= 0; i-- )
        {
        answ += m_value[i];
        }
    return answ;
    }