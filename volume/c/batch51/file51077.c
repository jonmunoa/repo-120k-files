// fichero 51077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51077;

Registro51077 crear_registro51077(int id) {
    Registro51077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51077(Registro51077 r) {
    return r.valor + r.id;
}
