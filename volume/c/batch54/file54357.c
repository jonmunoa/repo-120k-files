// fichero 54357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54357;

Registro54357 crear_registro54357(int id) {
    Registro54357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54357(Registro54357 r) {
    return r.valor + r.id;
}
