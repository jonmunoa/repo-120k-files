// fichero 51397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51397;

Registro51397 crear_registro51397(int id) {
    Registro51397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51397(Registro51397 r) {
    return r.valor + r.id;
}
