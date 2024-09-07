//
// Created by ok on 07.09.24.
//
/*
    string str1 = "Adjust for light and color sensitivity with Windows.";
    string str2 = "Fedora Workstation is Fedora’s official desktop edition.";
    FileManager fileManager("example.txt");

    fileManager.refreshFile();

    cout << "First read:" << endl;
    cout << fileManager.readFile() << endl;

    // Write a file
    fileManager.appendText(str1);

    cout << "Second read:" << endl;
    cout << fileManager.readFile() << endl;

    // Append a file
    fileManager.appendText(str2);

    cout << "Third read:" << endl;
    cout << fileManager.readFile() << endl;
 */

#include "FileManager.h"
string FileManager::readFile() {
    ifstream inputFile(filename_);
    string line, content;

    if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            content += line + "\n";
        }
        inputFile.close();
    } else {
        cout << "Unable to open file";
    }

    return content;
}

void FileManager::writeFile(const string& text) {
    ofstream outputFile(filename_);

    if (outputFile.is_open()) {
        outputFile << text << endl;
        outputFile.close();
    } else {
        cout << "Unable to open file";
    }
}

void FileManager::refreshFile() {
    if (!FileManager::isFileExists()) {
        std::ofstream outputFile(filename_);
        outputFile.close();
    }
}

bool FileManager::isFileExists() {
    ifstream file(filename_);
    return file.good();
}

void FileManager::appendText(const string& text) {
    ofstream outputFile(filename_, ios::app);

    if (outputFile.is_open()) {
        outputFile << text << endl;
        outputFile.close();
    } else {
        cout << "Unable to open file";
    }
}