// fichero 51837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51837;

Registro51837 crear_registro51837(int id) {
    Registro51837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51837(Registro51837 r) {
    return r.valor + r.id;
}
