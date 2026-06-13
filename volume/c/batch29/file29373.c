// fichero 29373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29373;

Registro29373 crear_registro29373(int id) {
    Registro29373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29373(Registro29373 r) {
    return r.valor + r.id;
}
