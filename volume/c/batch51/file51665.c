// fichero 51665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51665;

Registro51665 crear_registro51665(int id) {
    Registro51665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51665(Registro51665 r) {
    return r.valor + r.id;
}
