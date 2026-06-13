// fichero 54361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54361;

Registro54361 crear_registro54361(int id) {
    Registro54361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54361(Registro54361 r) {
    return r.valor + r.id;
}
