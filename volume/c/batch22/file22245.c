// fichero 22245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22245;

Registro22245 crear_registro22245(int id) {
    Registro22245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22245(Registro22245 r) {
    return r.valor + r.id;
}
