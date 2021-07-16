#include <iostream>
#include <string>

void to_binary(int x, std::string * result) {
    int y=x/2;
    if (y==1) {
	(*result).insert(0,std::__cxx11::to_string(x%2));
        (*result).insert(0,"1");
	std::cout << " " << x << " в двоичном представлении:" << std::endl << " " << *result << std::endl;
	return;
    }
    else {
        (*result).insert(0,std::__cxx11::to_string(x%2));
	to_binary(y, result);
    }
}

int power(int a, int b) {
    int power=1;
    while(b!=0) {
      power*=a;
      b--;
    }
    return power;
}

int main(int argc, char ** argv) {
// Реализовать функцию перевода чисел из десятичной системы в двоичную, используя рекурсию.
//
    std::cout << "1/2 = " << 1/2 << std::endl;
    std::cout << "1%2 = " << 1%2 << std::endl;
    //return 0;

    std::string result="";

    int x,y,z;
    std::cout << "Введите целое число: ";
    std::cin >> x;

    to_binary(x, &result);

    std::cout << "Введите целое число (основание): ";
    std::cin >> x;
    std::cout << "Введите целое число (степень): ";
    std::cin >> y;

    z=power(x,y);
    std::cout << " " << x << " в степени " << y << " = " << z << std::endl;
    return 0;
}
