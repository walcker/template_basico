#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

template <class tipodado>
tipodado funcao( tipodado a){
    return a + 1;
}

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    cout << funcao(2) << endl;
    cout << funcao(1.51) << endl;
    cout << funcao('b') << endl;

    return 0;
}
