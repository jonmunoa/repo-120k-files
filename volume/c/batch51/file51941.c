// fichero 51941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51941;

Registro51941 crear_registro51941(int id) {
    Registro51941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51941(Registro51941 r) {
    return r.valor + r.id;
}
