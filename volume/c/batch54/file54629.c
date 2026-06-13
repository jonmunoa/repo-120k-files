// fichero 54629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54629;

Registro54629 crear_registro54629(int id) {
    Registro54629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54629(Registro54629 r) {
    return r.valor + r.id;
}
