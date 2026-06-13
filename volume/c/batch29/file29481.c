// fichero 29481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29481;

Registro29481 crear_registro29481(int id) {
    Registro29481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29481(Registro29481 r) {
    return r.valor + r.id;
}
