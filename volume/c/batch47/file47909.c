// fichero 47909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47909;

Registro47909 crear_registro47909(int id) {
    Registro47909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47909(Registro47909 r) {
    return r.valor + r.id;
}
