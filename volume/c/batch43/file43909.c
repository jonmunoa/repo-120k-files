// fichero 43909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43909;

Registro43909 crear_registro43909(int id) {
    Registro43909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43909(Registro43909 r) {
    return r.valor + r.id;
}
