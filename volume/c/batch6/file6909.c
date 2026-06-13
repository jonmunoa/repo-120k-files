// fichero 6909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6909;

Registro6909 crear_registro6909(int id) {
    Registro6909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6909(Registro6909 r) {
    return r.valor + r.id;
}
