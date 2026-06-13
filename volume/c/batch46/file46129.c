// fichero 46129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46129;

Registro46129 crear_registro46129(int id) {
    Registro46129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46129(Registro46129 r) {
    return r.valor + r.id;
}
