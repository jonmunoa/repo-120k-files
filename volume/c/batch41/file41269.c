// fichero 41269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41269;

Registro41269 crear_registro41269(int id) {
    Registro41269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41269(Registro41269 r) {
    return r.valor + r.id;
}
