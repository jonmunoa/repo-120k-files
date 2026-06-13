// fichero 6097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6097;

Registro6097 crear_registro6097(int id) {
    Registro6097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6097(Registro6097 r) {
    return r.valor + r.id;
}
