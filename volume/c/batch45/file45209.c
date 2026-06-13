// fichero 45209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45209;

Registro45209 crear_registro45209(int id) {
    Registro45209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45209(Registro45209 r) {
    return r.valor + r.id;
}
