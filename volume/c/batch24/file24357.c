// fichero 24357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24357;

Registro24357 crear_registro24357(int id) {
    Registro24357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24357(Registro24357 r) {
    return r.valor + r.id;
}
