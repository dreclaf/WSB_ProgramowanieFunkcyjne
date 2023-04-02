#pragma once

#ifndef _FILEHANDLER_H_
#define _FILEHANDLER_H_

#include <mutex>
#include <vector>
#include <string>

class FileHandler
{
private:
    FileHandler();
    ~FileHandler();
    static FileHandler* instance;
    static std::mutex mtx;
    static int counter;

public:
    /**
     * Return instance of FileHandler
    */
    static FileHandler* getInstance();
    /**
     * Function return single line from file
     * @param int line to return
    */
    std::string getLine();
    std::vector<std::string> getAllLines();
};

#endif