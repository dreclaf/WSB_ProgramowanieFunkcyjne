#include <iostream>
#include <FileHandler.h>

int main(int argc, char** argv)
{
    for(int i = 0; i < 10; i++)
    {
        auto handler = FileHandler::getInstance();
        std::cout << handler->getLine();
    }
}