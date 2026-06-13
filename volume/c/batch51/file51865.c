// fichero 51865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51865;

Registro51865 crear_registro51865(int id) {
    Registro51865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51865(Registro51865 r) {
    return r.valor + r.id;
}
