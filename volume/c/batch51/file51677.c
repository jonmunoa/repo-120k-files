// fichero 51677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51677;

Registro51677 crear_registro51677(int id) {
    Registro51677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51677(Registro51677 r) {
    return r.valor + r.id;
}
