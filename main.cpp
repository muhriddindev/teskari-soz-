#include <iostream>
#include <cmath>
#include "ctime"
#include <limits.h>

using namespace std;

string fun(string str){
    string s;

    for (int i = str.length()-1; i >= 0 ; --i) {
        s=s+str[i];
    }
    return s;
}

int main() {
    string s;

    cout<< " soz kiriting biz sizga tekari qilib beramiz :)\n";
    getline(cin, s);

    cout << fun(s);

}