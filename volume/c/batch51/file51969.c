// fichero 51969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51969;

Registro51969 crear_registro51969(int id) {
    Registro51969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51969(Registro51969 r) {
    return r.valor + r.id;
}
