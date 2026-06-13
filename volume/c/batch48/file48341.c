// fichero 48341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48341;

Registro48341 crear_registro48341(int id) {
    Registro48341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48341(Registro48341 r) {
    return r.valor + r.id;
}
