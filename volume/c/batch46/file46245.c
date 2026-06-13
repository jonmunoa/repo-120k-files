// fichero 46245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46245;

Registro46245 crear_registro46245(int id) {
    Registro46245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46245(Registro46245 r) {
    return r.valor + r.id;
}
