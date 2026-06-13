// fichero 48797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48797;

Registro48797 crear_registro48797(int id) {
    Registro48797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48797(Registro48797 r) {
    return r.valor + r.id;
}
