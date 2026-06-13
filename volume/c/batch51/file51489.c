// fichero 51489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51489;

Registro51489 crear_registro51489(int id) {
    Registro51489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51489(Registro51489 r) {
    return r.valor + r.id;
}
