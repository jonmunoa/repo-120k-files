// fichero 4097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4097;

Registro4097 crear_registro4097(int id) {
    Registro4097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4097(Registro4097 r) {
    return r.valor + r.id;
}
