#include <iostream>
using namespace std;
void multiplicar(int x[3][3][3],int y){
    for(int i = 0;i < 3; i++){
        for(int j = 0; j  < 3; j++){
            for(int k = 0; k < 3; k++){
                x[i][j][k] *= y;
            }
        }
    }
}
void print(int x[3][3][3]){
    for(int i = 0;i < 3; i++){
        for(int j = 0; j  < 3; j++){
        	std::cout << "{ ";
            for(int k = 0; k < 3; k++){
                cout << x[i][j][k] << ' '; 
            }
            std::cout << "}\t ";
        }
        cout << '\n';
    }
}
int main(){ 
    int x[3][3][3] = {
        {{1,2,3},{4,5,6},{7,8,9}},
        {{11,12,13},{14,15,16},{17,18,19}},
        {{21,22,23},{24,25,26},{27,28,29}}};
    multiplicar(x,4);
    print(x);
    return 0;
}
