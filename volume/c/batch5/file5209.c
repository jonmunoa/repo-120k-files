// fichero 5209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5209;

Registro5209 crear_registro5209(int id) {
    Registro5209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5209(Registro5209 r) {
    return r.valor + r.id;
}
