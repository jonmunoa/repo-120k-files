// fichero 45137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45137;

Registro45137 crear_registro45137(int id) {
    Registro45137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45137(Registro45137 r) {
    return r.valor + r.id;
}
