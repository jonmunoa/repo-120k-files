// fichero 51961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51961;

Registro51961 crear_registro51961(int id) {
    Registro51961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51961(Registro51961 r) {
    return r.valor + r.id;
}
