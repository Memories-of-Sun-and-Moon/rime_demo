#include "constraints.hpp"
#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

void random_case(){
    for(int t = 0;t < 10;t++){
        // テストケースごとに、"random_XX.in" というファイルを作成する
        ofstream of(format("random_%02d.in", t + 1).c_str());

        int n = rnd.next(MIN_N, MAX_N);
        
        of << n << '\n';
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