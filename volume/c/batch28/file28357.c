// fichero 28357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28357;

Registro28357 crear_registro28357(int id) {
    Registro28357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28357(Registro28357 r) {
    return r.valor + r.id;
}
