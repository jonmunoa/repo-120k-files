// fichero 20529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20529;

Registro20529 crear_registro20529(int id) {
    Registro20529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20529(Registro20529 r) {
    return r.valor + r.id;
}
