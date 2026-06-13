// fichero 51185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51185;

Registro51185 crear_registro51185(int id) {
    Registro51185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51185(Registro51185 r) {
    return r.valor + r.id;
}
