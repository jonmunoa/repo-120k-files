// fichero 32165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32165;

Registro32165 crear_registro32165(int id) {
    Registro32165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32165(Registro32165 r) {
    return r.valor + r.id;
}
