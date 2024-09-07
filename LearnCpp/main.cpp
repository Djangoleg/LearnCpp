#include <iostream>
#include "Сlasses/FileManager.h"

using namespace std;


int main()
{
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

    return 0;
}

