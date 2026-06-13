// fichero 26073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26073;

Registro26073 crear_registro26073(int id) {
    Registro26073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26073(Registro26073 r) {
    return r.valor + r.id;
}
