// fichero 22025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22025;

Registro22025 crear_registro22025(int id) {
    Registro22025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22025(Registro22025 r) {
    return r.valor + r.id;
}
