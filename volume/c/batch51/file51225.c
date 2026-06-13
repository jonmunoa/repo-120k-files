// fichero 51225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51225;

Registro51225 crear_registro51225(int id) {
    Registro51225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51225(Registro51225 r) {
    return r.valor + r.id;
}
