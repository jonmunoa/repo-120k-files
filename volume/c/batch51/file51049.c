// fichero 51049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51049;

Registro51049 crear_registro51049(int id) {
    Registro51049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51049(Registro51049 r) {
    return r.valor + r.id;
}
