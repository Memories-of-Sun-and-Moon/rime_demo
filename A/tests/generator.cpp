#include "constraints.hpp"
#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

void random_case(){
    for(int t = 0;t < 10;t++){
        // テストケースごとに、"random_XX.in" というファイルを作成する
        ofstream of(format("random_%02d.in", t + 1).c_str());

        // string の長さを動的に指定するためには、そういった文字列を用意する必要があるみたい
        string length_range = "{" + to_string(MIN_S_LEN) + "," + to_string(MAX_S_LEN - 4) + "}";
        string pattern = "[a-z]" + length_range;

        string s = rnd.next(pattern);
        
        of << s << "2023" << '\n';
        of.close();
    }
}

int main(int argc, char* argv[]){
    // resisterGen
    registerGen(argc, argv, 1);

    rnd.setSeed(12345);

    // random case
    random_case();
}