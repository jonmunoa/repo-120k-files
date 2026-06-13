// fichero 14481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14481;

Registro14481 crear_registro14481(int id) {
    Registro14481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14481(Registro14481 r) {
    return r.valor + r.id;
}
