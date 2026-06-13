// fichero 20101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20101;

Registro20101 crear_registro20101(int id) {
    Registro20101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20101(Registro20101 r) {
    return r.valor + r.id;
}
