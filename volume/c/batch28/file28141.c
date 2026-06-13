// fichero 28141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28141;

Registro28141 crear_registro28141(int id) {
    Registro28141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28141(Registro28141 r) {
    return r.valor + r.id;
}
