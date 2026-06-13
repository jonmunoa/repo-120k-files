// fichero 49481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49481;

Registro49481 crear_registro49481(int id) {
    Registro49481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49481(Registro49481 r) {
    return r.valor + r.id;
}
