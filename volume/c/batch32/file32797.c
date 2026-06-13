// fichero 32797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32797;

Registro32797 crear_registro32797(int id) {
    Registro32797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32797(Registro32797 r) {
    return r.valor + r.id;
}
