#include "constraints.hpp"
#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    registerValidation(argc, argv);

    string length_range = "{" + to_string(MIN_S_LEN) + "," + to_string(MAX_S_LEN) + "}";
    string pattern = "[a-z0-9]" + length_range;
    string s = inf.readToken(pattern);
    ensuref(s.substr(s.size() - 4) == "2023", "String 'S' must end with '2023'");
    inf.readEoln();
    inf.readEof();
}