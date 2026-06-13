// fichero 45189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45189;

Registro45189 crear_registro45189(int id) {
    Registro45189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45189(Registro45189 r) {
    return r.valor + r.id;
}
