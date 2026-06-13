// fichero 46193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46193;

Registro46193 crear_registro46193(int id) {
    Registro46193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46193(Registro46193 r) {
    return r.valor + r.id;
}
