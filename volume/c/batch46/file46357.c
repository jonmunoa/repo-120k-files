// fichero 46357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46357;

Registro46357 crear_registro46357(int id) {
    Registro46357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46357(Registro46357 r) {
    return r.valor + r.id;
}
