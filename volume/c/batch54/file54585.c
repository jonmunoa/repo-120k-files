// fichero 54585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54585;

Registro54585 crear_registro54585(int id) {
    Registro54585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54585(Registro54585 r) {
    return r.valor + r.id;
}
