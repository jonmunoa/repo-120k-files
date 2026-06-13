// fichero 28921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28921;

Registro28921 crear_registro28921(int id) {
    Registro28921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28921(Registro28921 r) {
    return r.valor + r.id;
}
