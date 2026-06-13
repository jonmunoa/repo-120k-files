// fichero 52045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52045;

Registro52045 crear_registro52045(int id) {
    Registro52045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52045(Registro52045 r) {
    return r.valor + r.id;
}
