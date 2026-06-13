// fichero 4073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4073;

Registro4073 crear_registro4073(int id) {
    Registro4073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4073(Registro4073 r) {
    return r.valor + r.id;
}
