// fichero 8269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8269;

Registro8269 crear_registro8269(int id) {
    Registro8269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8269(Registro8269 r) {
    return r.valor + r.id;
}
