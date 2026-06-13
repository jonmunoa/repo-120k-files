// fichero 51853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51853;

Registro51853 crear_registro51853(int id) {
    Registro51853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51853(Registro51853 r) {
    return r.valor + r.id;
}
