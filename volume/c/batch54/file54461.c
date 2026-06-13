// fichero 54461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54461;

Registro54461 crear_registro54461(int id) {
    Registro54461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54461(Registro54461 r) {
    return r.valor + r.id;
}
