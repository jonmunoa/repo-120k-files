// fichero 46073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46073;

Registro46073 crear_registro46073(int id) {
    Registro46073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46073(Registro46073 r) {
    return r.valor + r.id;
}
