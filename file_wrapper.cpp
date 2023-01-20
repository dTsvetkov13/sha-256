/**
*
* Solution to course project # <номер на вариант>
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2022/2023
*
* @author Denis Tsvetkov
* @idnumber 7MI0600259
* @compiler VC
*
* This wrapper works with files
*
*/

#pragma once

#include <fstream>

#include <iostream>

#include "file_wrapper.h";

const unsigned int MESSAGE_MAX_SIZE = 500;


void readMessage(const char* filePath, char* &message)
{
    message = new char[MESSAGE_MAX_SIZE];

    std::ifstream myfile(filePath);

    if (myfile.is_open())
    {
        myfile >> message;
        myfile.close();
    }
    else std::cout << "File error";
}

void readMessage(const char* filePath, uint8_t*& message)
{
    message = new uint8_t[MESSAGE_MAX_SIZE];

    std::ifstream myfile(filePath);

    if (myfile.is_open())
    {
        myfile >> message;
        myfile.close();
    }
    else std::cout << "File error";
}

void writeMessage(const char* filePath, char* message)
{
    std::ofstream myfile;
    myfile.open(filePath);
    
    if (myfile.is_open())
    {
        myfile << message;
        myfile.close();
    }
    else std::cout << "File error";
}

void writeMessage(const char* filePath, uint8_t* message)
{
    std::ofstream myfile;
    myfile.open(filePath);

    if (myfile.is_open())
    {
        myfile << message;
        myfile.close();
    }
    else std::cout << "File error";
}