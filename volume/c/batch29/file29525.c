// fichero 29525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29525;

Registro29525 crear_registro29525(int id) {
    Registro29525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29525(Registro29525 r) {
    return r.valor + r.id;
}
