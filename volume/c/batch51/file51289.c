// fichero 51289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51289;

Registro51289 crear_registro51289(int id) {
    Registro51289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51289(Registro51289 r) {
    return r.valor + r.id;
}
