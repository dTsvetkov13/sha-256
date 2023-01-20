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
* Main file
*
*/

#pragma once

#include <iostream>

#include "sha_256.h"
#include "file_wrapper.h";

int main()
{
	char* message = nullptr;

	readMessage("input_messages.txt", message);

	std::cout << "Message read from the file: " << message << std::endl;

	uint8_t* digested2 = nullptr;
	sha256(message, digested2);

	std::cout << "Its hash: " << toString(digested2) << std::endl;

	writeMessage("hashed_texts.txt", digested2);
	
	readMessage("hashed_texts.txt", digested2);

	std::cout << "Hash saved in the file: " << toString(digested2) << std::endl;

	delete[] message;
	delete[] digested2;

	return EXIT_SUCCESS;
}