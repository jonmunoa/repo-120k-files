// fichero 35537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35537;

Registro35537 crear_registro35537(int id) {
    Registro35537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35537(Registro35537 r) {
    return r.valor + r.id;
}
