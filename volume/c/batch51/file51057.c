// fichero 51057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51057;

Registro51057 crear_registro51057(int id) {
    Registro51057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51057(Registro51057 r) {
    return r.valor + r.id;
}
