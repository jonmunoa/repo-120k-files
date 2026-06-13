// fichero 45325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45325;

Registro45325 crear_registro45325(int id) {
    Registro45325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45325(Registro45325 r) {
    return r.valor + r.id;
}
