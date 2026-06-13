// fichero 39329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39329;

Registro39329 crear_registro39329(int id) {
    Registro39329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39329(Registro39329 r) {
    return r.valor + r.id;
}
