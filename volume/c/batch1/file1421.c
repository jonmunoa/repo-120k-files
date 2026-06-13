// fichero 1421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1421;

Registro1421 crear_registro1421(int id) {
    Registro1421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1421(Registro1421 r) {
    return r.valor + r.id;
}
