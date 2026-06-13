// fichero 51609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51609;

Registro51609 crear_registro51609(int id) {
    Registro51609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51609(Registro51609 r) {
    return r.valor + r.id;
}
