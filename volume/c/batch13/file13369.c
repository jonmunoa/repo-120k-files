// fichero 13369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13369;

Registro13369 crear_registro13369(int id) {
    Registro13369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13369(Registro13369 r) {
    return r.valor + r.id;
}
