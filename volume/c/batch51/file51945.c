// fichero 51945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51945;

Registro51945 crear_registro51945(int id) {
    Registro51945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51945(Registro51945 r) {
    return r.valor + r.id;
}
