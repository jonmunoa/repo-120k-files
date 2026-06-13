// fichero 6481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6481;

Registro6481 crear_registro6481(int id) {
    Registro6481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6481(Registro6481 r) {
    return r.valor + r.id;
}
