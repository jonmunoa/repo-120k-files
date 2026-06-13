// fichero 51713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51713;

Registro51713 crear_registro51713(int id) {
    Registro51713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51713(Registro51713 r) {
    return r.valor + r.id;
}
