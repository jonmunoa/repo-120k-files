// fichero 38073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38073;

Registro38073 crear_registro38073(int id) {
    Registro38073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38073(Registro38073 r) {
    return r.valor + r.id;
}
