
#include <iostream>
#include <map>
#include <string>

using namespace std;

class solution {
  public:
    int charToNum(char a) {
        switch(a) {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
        }

        return 0;
    }

    int romanToInt(string s) {
        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            if (charToNum(s[i]) < charToNum(s[i+1])) {
                result = result - charToNum(s[i]); 
            } else {
                result += charToNum(s[i]);
            }
        }

        return result;
    }
};