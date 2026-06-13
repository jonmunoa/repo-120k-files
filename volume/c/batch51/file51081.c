// fichero 51081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51081;

Registro51081 crear_registro51081(int id) {
    Registro51081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51081(Registro51081 r) {
    return r.valor + r.id;
}
