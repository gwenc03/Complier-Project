#include <iostream>
#include <fstream>
#include <vector>
#include <map>
using namespace std;
#include "LexAnalyzer.h"

int main() {
    ifstream lexemeFile("lexemes.txt");
    if (!lexemeFile){
        cout << "can't find lexeme file" << endl;
        exit(-1);
    }
    ifstream sourceFile("source.txt");
    if (!sourceFile){
        cout << "can't find source file" << endl;
        exit(-1);
    }

    ofstream outFile("output.txt");
    LexAnalyzer lexAn(lexemeFile);
    //lexAn.printMap();
    if (!lexAn.scanFile(sourceFile, outFile)){
        cout << "error in source file" << endl;
    }
    lexAn.printVectors(outFile);
    return 0;
}