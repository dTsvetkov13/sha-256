#pragma once

void readMessage(const char* filePath, char* &message);
void readMessage(const char* filePath, uint8_t*& message);

void writeMessage(const char* filePath, char* message);
void writeMessage(const char* filePath, uint8_t* message);