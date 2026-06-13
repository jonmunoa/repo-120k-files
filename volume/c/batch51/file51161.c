// fichero 51161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51161;

Registro51161 crear_registro51161(int id) {
    Registro51161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51161(Registro51161 r) {
    return r.valor + r.id;
}
