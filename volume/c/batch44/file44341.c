// fichero 44341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44341;

Registro44341 crear_registro44341(int id) {
    Registro44341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44341(Registro44341 r) {
    return r.valor + r.id;
}
