// fichero 54065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54065;

Registro54065 crear_registro54065(int id) {
    Registro54065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54065(Registro54065 r) {
    return r.valor + r.id;
}
