// fichero 5097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5097;

Registro5097 crear_registro5097(int id) {
    Registro5097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5097(Registro5097 r) {
    return r.valor + r.id;
}
