#pragma once

#include <string>
#include <array>

void sha256(char* message, uint8_t* &hashed);

std::string toString(const uint8_t* digest);
char* toString2(const uint8_t* digest);
