// fichero 20125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20125;

Registro20125 crear_registro20125(int id) {
    Registro20125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20125(Registro20125 r) {
    return r.valor + r.id;
}
