// fichero 28553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28553;

Registro28553 crear_registro28553(int id) {
    Registro28553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28553(Registro28553 r) {
    return r.valor + r.id;
}
