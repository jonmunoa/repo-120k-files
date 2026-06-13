// fichero 32157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32157;

Registro32157 crear_registro32157(int id) {
    Registro32157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32157(Registro32157 r) {
    return r.valor + r.id;
}
