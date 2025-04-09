#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

// Función que realiza el producto escalar de un vector
vector<int> productoEscalar(int escalar, const vector<int>& vec) {
    vector<int> resultado;
    for (int elemento : vec) {
        resultado.push_back(escalar * elemento);
    }
    return resultado;
}

int main() {
    vector<int> vectorOriginal = {1, 2, 3};
    int escalar = 5;
    vector<int> resultadoEsperado = {5, 10, 15};
    vector<int> resultadoCalculado = productoEscalar(escalar, vectorOriginal);
    // Verificar con assert
    assert(resultadoCalculado == resultadoEsperado);
    
    cout << "Prueba exitosa: 5x(1,2,3) = (5,10,15)" << endl;
    
    return 0;
}