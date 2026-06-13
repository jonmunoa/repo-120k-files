// fichero 51145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51145;

Registro51145 crear_registro51145(int id) {
    Registro51145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51145(Registro51145 r) {
    return r.valor + r.id;
}
