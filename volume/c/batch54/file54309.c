// fichero 54309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54309;

Registro54309 crear_registro54309(int id) {
    Registro54309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54309(Registro54309 r) {
    return r.valor + r.id;
}
