// fichero 45093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45093;

Registro45093 crear_registro45093(int id) {
    Registro45093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45093(Registro45093 r) {
    return r.valor + r.id;
}
