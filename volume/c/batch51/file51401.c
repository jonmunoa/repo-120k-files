// fichero 51401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51401;

Registro51401 crear_registro51401(int id) {
    Registro51401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51401(Registro51401 r) {
    return r.valor + r.id;
}
