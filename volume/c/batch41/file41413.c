// fichero 41413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41413;

Registro41413 crear_registro41413(int id) {
    Registro41413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41413(Registro41413 r) {
    return r.valor + r.id;
}
