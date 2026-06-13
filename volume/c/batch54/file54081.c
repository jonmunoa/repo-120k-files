// fichero 54081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54081;

Registro54081 crear_registro54081(int id) {
    Registro54081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54081(Registro54081 r) {
    return r.valor + r.id;
}
