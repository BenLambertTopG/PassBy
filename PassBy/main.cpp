#include <iostream>

void PassByValue(int x);
void PassByRef(int &x);

main()
{
    int x{10};
    PassByValue(x);
    std::cout << "But when exiting the function the copy is destroyed and the orginal x is still " << x << std::endl;
    PassByRef(x);
    std::cout << "Now when exitign the function the original X is now " << x << std::endl;
}

void PassByValue(int x)
{
    std::cout << "When passing by value you make a copy of X which is " << x << std::endl;
    x = 20;
    std::cout << "When you chnage X to 20 the original becomes " << x << std::endl;
}

void PassByRef(int &x)
{

    std::cout << "When passing by referance can now affect X which is " << x << std::endl;
    x = 20;
    std::cout << "When you chnage X to 20 the copy becomes " << x << std::endl;
}