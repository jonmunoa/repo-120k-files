// fichero 22101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22101;

Registro22101 crear_registro22101(int id) {
    Registro22101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22101(Registro22101 r) {
    return r.valor + r.id;
}
