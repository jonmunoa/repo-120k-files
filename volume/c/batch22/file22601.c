// fichero 22601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22601;

Registro22601 crear_registro22601(int id) {
    Registro22601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22601(Registro22601 r) {
    return r.valor + r.id;
}
