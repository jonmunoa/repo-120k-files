// fichero 1461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1461;

Registro1461 crear_registro1461(int id) {
    Registro1461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1461(Registro1461 r) {
    return r.valor + r.id;
}
