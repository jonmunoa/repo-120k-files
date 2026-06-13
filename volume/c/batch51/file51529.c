// fichero 51529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51529;

Registro51529 crear_registro51529(int id) {
    Registro51529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51529(Registro51529 r) {
    return r.valor + r.id;
}
