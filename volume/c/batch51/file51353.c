// fichero 51353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51353;

Registro51353 crear_registro51353(int id) {
    Registro51353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51353(Registro51353 r) {
    return r.valor + r.id;
}
