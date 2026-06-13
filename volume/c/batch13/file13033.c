// fichero 13033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13033;

Registro13033 crear_registro13033(int id) {
    Registro13033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13033(Registro13033 r) {
    return r.valor + r.id;
}
