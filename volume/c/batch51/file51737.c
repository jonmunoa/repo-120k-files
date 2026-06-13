// fichero 51737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51737;

Registro51737 crear_registro51737(int id) {
    Registro51737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51737(Registro51737 r) {
    return r.valor + r.id;
}
