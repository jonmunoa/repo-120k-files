// fichero 33601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33601;

Registro33601 crear_registro33601(int id) {
    Registro33601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33601(Registro33601 r) {
    return r.valor + r.id;
}
