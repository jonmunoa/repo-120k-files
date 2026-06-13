// fichero 54217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54217;

Registro54217 crear_registro54217(int id) {
    Registro54217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54217(Registro54217 r) {
    return r.valor + r.id;
}
