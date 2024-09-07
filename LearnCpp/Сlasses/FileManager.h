//
// Created by ok on 07.09.24.
//

#ifndef LEARNCPP_FILEMANAGER_H
#define LEARNCPP_FILEMANAGER_H

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

/**
 * @class FileManager
 * @brief A FileManager class to read and write a file
 */
class FileManager {
public:
    /**
     * @brief Constructor for FileManager
     * @param filename The name of the file to be read/written
     */
    FileManager(const string& filename) : filename_(filename) {}

    /**
     * @brief Reads a file and returns its content
     * @return The content of the file
     */
    string readFile();

    /**
     * @brief Writes a file with the given text
     * @param text The text to be written in the file
     */
    void writeFile(const string& text);

    /**
     * @brief Refresh a file with the given text
     */
    void refreshFile();

    /**
     * @brief Add text to file.
     * @param text The text to be written in the file
     */
    void appendText(const string& text);

    /**
     * @brief Check a file exists.
     * @return Is file exists?
     */
    bool isFileExists();

private:
    string filename_;
};

#endif //LEARNCPP_FILEMANAGER_H
