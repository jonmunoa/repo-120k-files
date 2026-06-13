// fichero 44329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44329;

Registro44329 crear_registro44329(int id) {
    Registro44329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44329(Registro44329 r) {
    return r.valor + r.id;
}
