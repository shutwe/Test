#include <string>
#include <iostream>

class Foo
    {
    private:
        std::string m_value;

    public:
        Foo (std::string value)
            {
            m_value = value + " this is not";    
            }

        std::string GetValue () {return m_value;};
        std::string TestPlay ();
    };