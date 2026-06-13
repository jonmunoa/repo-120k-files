// fichero 28349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28349;

Registro28349 crear_registro28349(int id) {
    Registro28349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28349(Registro28349 r) {
    return r.valor + r.id;
}
