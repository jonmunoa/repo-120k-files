// fichero 51361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51361;

Registro51361 crear_registro51361(int id) {
    Registro51361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51361(Registro51361 r) {
    return r.valor + r.id;
}
