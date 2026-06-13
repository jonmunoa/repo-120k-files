// fichero 51809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51809;

Registro51809 crear_registro51809(int id) {
    Registro51809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51809(Registro51809 r) {
    return r.valor + r.id;
}
