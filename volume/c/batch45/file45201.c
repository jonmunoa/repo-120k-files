// fichero 45201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45201;

Registro45201 crear_registro45201(int id) {
    Registro45201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45201(Registro45201 r) {
    return r.valor + r.id;
}
