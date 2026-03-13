// Open() , Close() , Read(),Write() / Append() , delete() , move() , copy()

// Why do we have open a file ?
// A file is resource.

// Closing a file is very important.

// Read() -- View Only mode
// If the file does not exist -- We will not be able to perform the opreration. It will throw an error.

// Write() -- To update the content. it will overwrite the existing content.
// If the file does not exist -- It will create a new file.
// Example: File.txt : Content:
// Hello World!
// I am learning c++.

// Line we are trying to add: I want to learn something new.
// COntent after write operation: I want to learn something new.

// Append() -- To update the content. it adds the new content to the end of the previous content.
// If the file does not exist -- It will create a new file.
// Example: File.txt : Content:
// Hello World!
// I am learning c++.

// Line we are trying to add: I want to learn something new.
// Content after append operation:
// Hello World!
// I am learning c++.I want to learn something new.

// operating System

// Coding Section

// read a file -- ifstream
// write to a file ofstream
// For both read and Write -- fstream

#include <iostream>
#include <fstream>

using namespace std;

// int main()
// {
//     ofstream file("example.txt");

//     if (!file)
//     {
//         cout << "File not found" << endl;
//         return 1;
//     }

//     file << "This is the final line  \n";

//     file.close();
//     return 0;
// }

// int main()
// {

//     ifstream file("Hello.txt");

//     if (!file)
//     {
//         cout << "File not found \n";
//         return 1;
//     }

//     string line;

//     while (getline(file, line))
//     {
//         cout << line << endl;
//     }
//     file.close();
//     return 0;
// }

// int main()
// {

//     // Append Mode

//     ofstream file("example.txt", ios::app);
//     file << "THis is the new content";
//     file << "I have added one more line";
//     return 0;
// }

int main()
{
    fstream file("example.txt", ios::app | ios::in);
    if (!file)
    {
        cout << "File not found\n";
        return 1;
    }
    file << "I am appending something.";

    return 0;
}