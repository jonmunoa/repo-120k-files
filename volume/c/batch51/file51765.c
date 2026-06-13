// fichero 51765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51765;

Registro51765 crear_registro51765(int id) {
    Registro51765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51765(Registro51765 r) {
    return r.valor + r.id;
}
