// fichero 16281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16281;

Registro16281 crear_registro16281(int id) {
    Registro16281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16281(Registro16281 r) {
    return r.valor + r.id;
}
