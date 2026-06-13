// fichero 54933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54933;

Registro54933 crear_registro54933(int id) {
    Registro54933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54933(Registro54933 r) {
    return r.valor + r.id;
}
