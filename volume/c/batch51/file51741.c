// fichero 51741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51741;

Registro51741 crear_registro51741(int id) {
    Registro51741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51741(Registro51741 r) {
    return r.valor + r.id;
}
