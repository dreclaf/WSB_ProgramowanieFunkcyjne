#include "FileHandler.h"

FileHandler* FileHandler::instance  = nullptr;
std::mutex FileHandler::mtx;
int FileHandler::counter = 0;

FileHandler::FileHandler()
{
    counter++;
};
FileHandler::~FileHandler()
{
    delete instance;
};

FileHandler* FileHandler::getInstance()
{
    if( instance == nullptr )
    {
        mtx.lock();
        if( instance == nullptr )
        {
            instance = new FileHandler();
        }
        mtx.unlock();
    }
    return instance;
}

std::string FileHandler::getLine()
{
    std::string lReturn = "\tactual cunter val = " + std::to_string(FileHandler::counter) + "\n";
    return lReturn;
}

std::vector<std::string> FileHandler::getAllLines()
{
    std::vector<std::string> replay;
    return replay;
}

