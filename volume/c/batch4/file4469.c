// fichero 4469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4469;

Registro4469 crear_registro4469(int id) {
    Registro4469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4469(Registro4469 r) {
    return r.valor + r.id;
}
