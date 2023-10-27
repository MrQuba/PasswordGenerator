#include <iostream>
#include <time.h>
#include <cstring>
using namespace std;
int main() {
    const char* acceptableCharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+[]{}|;:',.<>/?`~";
    srand(time(NULL));
    int length=strlen(acceptableCharacters);
    int passLength;
    cin >> passLength;
    char result[passLength];
    int current;
    for(int i=0; i < passLength; i++){
    current= rand () % length;
    result [i] = acceptableCharacters [current];
    }
    cout << result <<endl;
    
    return 0;
}
    
