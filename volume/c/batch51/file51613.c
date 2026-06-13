// fichero 51613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51613;

Registro51613 crear_registro51613(int id) {
    Registro51613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51613(Registro51613 r) {
    return r.valor + r.id;
}
