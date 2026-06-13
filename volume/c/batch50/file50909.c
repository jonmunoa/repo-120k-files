// fichero 50909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50909;

Registro50909 crear_registro50909(int id) {
    Registro50909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50909(Registro50909 r) {
    return r.valor + r.id;
}
