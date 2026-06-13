// fichero 51949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51949;

Registro51949 crear_registro51949(int id) {
    Registro51949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51949(Registro51949 r) {
    return r.valor + r.id;
}
