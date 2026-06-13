// fichero 141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro141;

Registro141 crear_registro141(int id) {
    Registro141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro141(Registro141 r) {
    return r.valor + r.id;
}
