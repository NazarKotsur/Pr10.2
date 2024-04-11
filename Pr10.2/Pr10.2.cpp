#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countWords(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Could not open file: " << filename << endl;
        return -1; // Повертаємо -1 у випадку помилки
    }

    string word;
    int wordCount = 0;
    while (file >> word) {
        wordCount++;
    }

    file.close();
    return wordCount;
}

int main() {
    string filename = "t.txt";
    int numWords = countWords(filename);
    if (numWords >= 0) {
        cout << "The file contains " << numWords << " words." << endl;
    }
    return 0;
}