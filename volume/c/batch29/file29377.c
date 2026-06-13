// fichero 29377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29377;

Registro29377 crear_registro29377(int id) {
    Registro29377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29377(Registro29377 r) {
    return r.valor + r.id;
}
