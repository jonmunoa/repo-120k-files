// fichero 33073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33073;

Registro33073 crear_registro33073(int id) {
    Registro33073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33073(Registro33073 r) {
    return r.valor + r.id;
}
