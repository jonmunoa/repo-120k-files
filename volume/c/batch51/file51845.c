// fichero 51845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51845;

Registro51845 crear_registro51845(int id) {
    Registro51845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51845(Registro51845 r) {
    return r.valor + r.id;
}
