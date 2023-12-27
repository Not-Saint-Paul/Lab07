/************************************
 * Автор: Станковский П.А.          *
 * Дата: 26.12.2023                 *
 * Название: Shitcode Lab7 v1       *
 * https://onlinegdb.com/_NkB3Ug0a7 *
 ************************************/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
 
int main() {
    int key = 0;
    double ch = 0;
    string str;

    ifstream fin("Тарабанщина.txt");
    getline(fin, str);
    
    char *mass = new char[str.length()];
    int *arr = new int [str.length()];
    for (int ai = 0; ai < str.length(); ++ai) {
        arr[ai] = 0;
    }
    
    while (key < str.length()) {
        for (int ai = 0; ai < str.length(); ++ai) {
            if (str[key] == str[ai]){
                ++arr[key];
            }
        }
        mass[key] = str[key];
        ++key;
    }

    for (int ai = 0; ai < str.length(); ++ai) {
        if (arr[ai] > 1) {
            ch += arr[ai];
        }
        cout << mass[ai] << " - " << arr[ai] << endl;
        
    }
    
    cout << "частота повторений: " << (ch/2)/str.length();
    
    return 0; 
}
