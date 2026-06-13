// fichero 51001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51001;

Registro51001 crear_registro51001(int id) {
    Registro51001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51001(Registro51001 r) {
    return r.valor + r.id;
}
