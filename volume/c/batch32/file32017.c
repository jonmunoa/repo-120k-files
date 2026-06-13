// fichero 32017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32017;

Registro32017 crear_registro32017(int id) {
    Registro32017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32017(Registro32017 r) {
    return r.valor + r.id;
}
