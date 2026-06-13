// fichero 45909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45909;

Registro45909 crear_registro45909(int id) {
    Registro45909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45909(Registro45909 r) {
    return r.valor + r.id;
}
