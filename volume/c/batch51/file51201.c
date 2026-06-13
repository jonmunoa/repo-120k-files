// fichero 51201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51201;

Registro51201 crear_registro51201(int id) {
    Registro51201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51201(Registro51201 r) {
    return r.valor + r.id;
}
