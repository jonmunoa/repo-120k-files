// fichero 45125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45125;

Registro45125 crear_registro45125(int id) {
    Registro45125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45125(Registro45125 r) {
    return r.valor + r.id;
}
