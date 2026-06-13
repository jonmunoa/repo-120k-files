// fichero 13881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13881;

Registro13881 crear_registro13881(int id) {
    Registro13881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13881(Registro13881 r) {
    return r.valor + r.id;
}
