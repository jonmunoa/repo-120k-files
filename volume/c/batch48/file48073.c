// fichero 48073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48073;

Registro48073 crear_registro48073(int id) {
    Registro48073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48073(Registro48073 r) {
    return r.valor + r.id;
}
