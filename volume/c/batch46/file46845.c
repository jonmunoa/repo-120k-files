// fichero 46845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46845;

Registro46845 crear_registro46845(int id) {
    Registro46845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46845(Registro46845 r) {
    return r.valor + r.id;
}
