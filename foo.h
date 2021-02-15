#include <string>
#include <iostream>

class Foo
    {
    private:
        std::string m_value;
        void InnerFunc ();

    public:
        Foo (std::string value)
            {
            m_value = value + " this is not";    
            }

        std::string GetValue () {return m_value;};
        std::string TestPlay ();
    };