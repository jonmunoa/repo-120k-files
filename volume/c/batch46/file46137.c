// fichero 46137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46137;

Registro46137 crear_registro46137(int id) {
    Registro46137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46137(Registro46137 r) {
    return r.valor + r.id;
}
