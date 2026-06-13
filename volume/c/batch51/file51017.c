// fichero 51017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51017;

Registro51017 crear_registro51017(int id) {
    Registro51017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51017(Registro51017 r) {
    return r.valor + r.id;
}
