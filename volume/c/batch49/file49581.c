// fichero 49581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49581;

Registro49581 crear_registro49581(int id) {
    Registro49581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49581(Registro49581 r) {
    return r.valor + r.id;
}
