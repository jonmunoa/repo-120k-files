// fichero 46909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46909;

Registro46909 crear_registro46909(int id) {
    Registro46909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46909(Registro46909 r) {
    return r.valor + r.id;
}
