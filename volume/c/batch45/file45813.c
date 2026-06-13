// fichero 45813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45813;

Registro45813 crear_registro45813(int id) {
    Registro45813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45813(Registro45813 r) {
    return r.valor + r.id;
}
