#include <iostream>
using namespace std;

float sumafi(float a, int b) {
	return a + b;
	}
double restalf(float a, double b) {
	return a - b;
	}
long multiplicaid(int a, long b) {
	return a * b;
	}
template<typename O,typename T, typename U>
O funcion(O(*op)(T, U), T a, U b){return op(a, b);}

int main(){
    std::cout<<"Suma: "<<funcion(sumafi, 4.0f, 5)<<std::endl;
	std::cout<<"Resta: "<<funcion(restalf, 4.0f, 5.0)<<std::endl;
	std::cout<<"Multiplicacion: "<<funcion(multiplicaid, 4, 5L)<<std::endl;
    return 0;
}