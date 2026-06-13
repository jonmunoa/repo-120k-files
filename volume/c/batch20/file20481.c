// fichero 20481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20481;

Registro20481 crear_registro20481(int id) {
    Registro20481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20481(Registro20481 r) {
    return r.valor + r.id;
}
