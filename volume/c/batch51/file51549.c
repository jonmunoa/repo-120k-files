// fichero 51549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51549;

Registro51549 crear_registro51549(int id) {
    Registro51549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51549(Registro51549 r) {
    return r.valor + r.id;
}
