// fichero 29413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29413;

Registro29413 crear_registro29413(int id) {
    Registro29413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29413(Registro29413 r) {
    return r.valor + r.id;
}
