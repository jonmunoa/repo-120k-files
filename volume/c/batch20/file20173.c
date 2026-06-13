// fichero 20173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20173;

Registro20173 crear_registro20173(int id) {
    Registro20173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20173(Registro20173 r) {
    return r.valor + r.id;
}
