// fichero 9793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9793;

Registro9793 crear_registro9793(int id) {
    Registro9793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9793(Registro9793 r) {
    return r.valor + r.id;
}
