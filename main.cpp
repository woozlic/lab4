#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;



char return_sdvig(int sdvig, char symb) {
	char result;
	int code_symb = (int)symb + sdvig;
	if ((int)symb >=65 && (int)symb <= 90 && code_symb > 90) {
		result = (char)((int)symb + sdvig-26); 
	}
	else if((int)symb >= 97 && (int)symb <= 122 && code_symb > 122) {
		result = (char)((int)symb + sdvig - 26);
	}
	else if ((int)symb >= -64 && (int)symb <= -33 && code_symb > -33) {
		result = (char)((int)symb + sdvig - 32);
		
	}
	else if ((int)symb >= -32 && (int)symb <= -1 && code_symb > -1) {
		result = (char)((int)symb + sdvig - 32);
		
	}
	else {
		result = (char)((int)symb + sdvig);
	}
	return result;
}
void method_czar(int sdvig) {
	string test_str = "Eat these soft French buns.";
	cout << "Исходная строка: " << test_str << endl;
	cout << "Сдвиг:" << sdvig << endl;
	cout << "Зашифрованная строка: ";
	for (int i = 0; i < test_str.size(); i++) {
		if (test_str[i] == ' ' or test_str[i] == '.' or test_str[i] == ',' or test_str[i] == '-') {
			cout << test_str[i];
		}
		else {
			cout << return_sdvig(sdvig, test_str[i]);
		}
	}
	cout << endl;
}

int main(){
  cout << "Hello\n";
}
