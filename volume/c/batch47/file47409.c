// fichero 47409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47409;

Registro47409 crear_registro47409(int id) {
    Registro47409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47409(Registro47409 r) {
    return r.valor + r.id;
}
