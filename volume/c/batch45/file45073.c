// fichero 45073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45073;

Registro45073 crear_registro45073(int id) {
    Registro45073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45073(Registro45073 r) {
    return r.valor + r.id;
}
