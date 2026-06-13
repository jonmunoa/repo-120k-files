// fichero 45045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45045;

Registro45045 crear_registro45045(int id) {
    Registro45045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45045(Registro45045 r) {
    return r.valor + r.id;
}
