// fichero 32073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32073;

Registro32073 crear_registro32073(int id) {
    Registro32073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32073(Registro32073 r) {
    return r.valor + r.id;
}
