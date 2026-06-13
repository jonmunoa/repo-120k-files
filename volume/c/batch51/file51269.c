// fichero 51269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51269;

Registro51269 crear_registro51269(int id) {
    Registro51269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51269(Registro51269 r) {
    return r.valor + r.id;
}
