// fichero 51373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51373;

Registro51373 crear_registro51373(int id) {
    Registro51373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51373(Registro51373 r) {
    return r.valor + r.id;
}
