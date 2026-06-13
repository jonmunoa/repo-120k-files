// fichero 51797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51797;

Registro51797 crear_registro51797(int id) {
    Registro51797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51797(Registro51797 r) {
    return r.valor + r.id;
}
