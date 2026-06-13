// fichero 22557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22557;

Registro22557 crear_registro22557(int id) {
    Registro22557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22557(Registro22557 r) {
    return r.valor + r.id;
}
